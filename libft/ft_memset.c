/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:37 by username          #+#    #+#             */
/*   Updated: 2026/11/10 13:51:05 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	unsigned_c;
	size_t			i;
	unsigned char	*str;

	unsigned_c = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = unsigned_c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int c = 'a';
	char str[5] = "baca";
	char *receive;
	receive = (char *)ft_memset((void *)str, c, 4);
	printf("%s", receive);
}
*/