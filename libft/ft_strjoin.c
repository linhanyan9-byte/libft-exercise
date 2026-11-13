/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:46 by username          #+#    #+#             */
/*   Updated: 2026/11/10 15:41:34 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	join = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!join)
		return (NULL);
	while (j < len_s1)
		join[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
/*
int main(void)
{
    char *result;

    result = ft_strjoin("BABY", " DUCk");
	if(!result)
		return 1;
    printf("%s\n", result);
    free(result);
}
	*/