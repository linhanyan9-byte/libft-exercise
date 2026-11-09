/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:34 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:51:35 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_;
	const unsigned char	*src_;

	dest_ = (unsigned char *) dest;
	src_ = (const unsigned char *) src;
	size_t	i;

	if (n == 0)
		return (dest);
	if (src_ < dest_)
	{
		i = n - 1;
		while (i > 0)
		{
			dest_[i] = src_[i];
			i--;
		}
		dest_[0] = src_[0];
	}
	else if (src_ > dest_)
	{
		i = 0;
		while (i < n)
		{
			dest_[i] = src_[i];
			i++;
		}
	}
	return (dest);
}
