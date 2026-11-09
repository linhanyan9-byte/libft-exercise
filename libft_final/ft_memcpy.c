/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:25 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:51:32 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_;
	unsigned char	*src_;
	size_t			i;

	i = 0;
	dest_ = (unsigned char *) dest;
	src_ = (unsigned char *) src;
	while (i < n)
	{
		dest_[i] = src_[i];
		i++;
	}
	return (dest);
}
