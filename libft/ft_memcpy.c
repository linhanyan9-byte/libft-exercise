/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:25 by username          #+#    #+#             */
/*   Updated: 2026/11/12 14:26:23 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_;
	unsigned char	*src_;
	size_t			i;

	i = 0;
	dest_ = (unsigned char *)dest;
	src_ = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest_[i] = src_[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char *src = "baca";
	void *dest;
	char *dest_str;
	dest = malloc(20);
	if (!dest)
		return 1;
	dest = ft_memcpy(dest, (const void *)src, 3);
	dest_str = (char *)dest;
	printf("%s", dest_str);
	free(dest);
}
	*/
