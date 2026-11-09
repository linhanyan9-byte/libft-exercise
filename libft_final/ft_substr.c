/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:29 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:53:31 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;
	size_t	len_s;
	size_t	end;

	end = start + len;
	i = start;
	j = 0;
	len_s = 0;
	while (s[len_s])
		len_s++;
	if (start >= len_s)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	//what if the input of len has overflow risk?//
	else if (end >= len_s)
	{
		sub = malloc(sizeof(char) * (len_s - start + 1));
		if (!sub)
			return (NULL);
		while (s[i])
		{
			sub[j] = s[i];
			i++;
			j++;
		}
	}
	else
	{
		sub = malloc(sizeof(char) * (end - start + 1));
		if (!sub)
			return (NULL);
		while (i < end)
		{
			sub[j] = s[i];
			i++;
			j++;
		}
	}
	sub[j] = '\0';
	return (sub);
}
