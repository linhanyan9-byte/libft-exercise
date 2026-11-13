/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:51 by username          #+#    #+#             */
/*   Updated: 2026/11/12 15:39:46 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_dst;
	size_t	length_src;

	i = 0;
	length_dst = 0;
	length_src = 0;
	while (dst[length_dst] != '\0')
		length_dst++;
	while (src[length_src] != '\0')
		length_src++;
	if (size == 0)
		return (length_src);
	if (size < length_dst + 1)
		return (size + length_src);
	while (length_dst + i < size - 1 && src[i] != '\0')
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (length_dst + length_src);
}
/*
int	main(void)
{
	char	dst1[20] = "a";
	size_t	result;

	result = ft_strlcat(dst1, "lorem ipsum dolor sit amet", 1);
	printf("%d\n", (int)result);
}
	*/