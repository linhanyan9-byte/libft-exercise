/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:19 by username          #+#    #+#             */
/*   Updated: 2026/11/10 13:09:32 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	int c = 'a';
	char *str = "baca";
	char *found;
	found = (char *)ft_memchr((const void *)str, c, 4);
	printf("%s", found);
}
	*/
