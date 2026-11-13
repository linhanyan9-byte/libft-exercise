/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:22 by username          #+#    #+#             */
/*   Updated: 2026/11/10 13:11:07 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_;
	const unsigned char	*s2_;
	size_t				i;

	i = 0;
	s1_ = (const unsigned char *)s1;
	s2_ = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_[i] == s2_[i])
			i++;
		else
			return (s1_[i] - s2_[i]);
	}
	return (0);
}
/*
int	main(void)
{
	int a;
	char *str1 = "baca";
	char *str2 = "baco";
	a = ft_memcmp((const void *)str1, (const void *)str2, 4);
	printf("%d", a);
}
	*/