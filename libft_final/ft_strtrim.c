/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:12 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:53:28 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len_s1;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;
	size_t	size;

	i = 0;
	start = 0;
	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	if (len_s1 == 0)
	{
		trim = malloc(1);
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	end = len_s1;
	while (s1[start])
	{
		j = 0;
		while (set[j])
		{
			if (s1[start] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		start++;
	}
	while (end > start)
	{
		j = 0;
		while (set[j])
		{
			if (s1[end - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		end--;
	}
	size = end - start;
	trim = malloc(sizeof(char)*size + 1);
	if (!trim)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++
	}
	trim[i] = '\0';
	return (trim);
}

//takeaway: check the edge case of empty string//
