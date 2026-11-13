/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:29 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:47:17 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sub_after_s(char *sub)
{
	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

static char	*ft_len_too_big(char const *s, size_t len_s, char *sub,
		size_t start)
{
	int	i;
	int	j;

	i = start;
	j = 0;
	sub = malloc(sizeof(char) * (len_s - start + 1));
	if (!sub)
		return (NULL);
	while (s[i])
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}

static char	*ft_everything_fit(char *sub, size_t start, int end, char const *s)
{
	int	j;
	int	i;

	i = start;
	j = 0;
	sub = malloc(sizeof(char) * (end - start + 1));
	if (!sub)
		return (NULL);
	while (i < end)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;
	size_t	len_s;
	size_t	end;

	sub = NULL;
	end = start + len;
	i = start;
	j = 0;
	len_s = 0;
	while (s[len_s])
		len_s++;
	if (start >= len_s)
		sub = ft_sub_after_s(sub);
	else if (end >= len_s)
		sub = ft_len_too_big(s, len_s, sub, start);
	else
		sub = ft_everything_fit(sub, start, end, s);
	return (sub);
}
/*
int	main(void)
{
	char	*sub;

	sub = ft_substr("Hello World", 6, 5);
	printf("%s\n", sub);
	free(sub);
	//Length exceeds string length
	sub = ft_substr("Hello", 2, 20);
	printf("%s\n", sub);
	free(sub);
	//Start exceeds string length
	sub = ft_substr("Hello", 10, 5);
	printf("%s\n", sub);
	free(sub);
}
	*/