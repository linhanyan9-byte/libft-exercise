/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:34 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:46:42 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*ft_transport_backwards(size_t i,
		const unsigned char *src_, unsigned char *dest_)
{
	while (i > 0)
	{
		dest_[i] = src_[i];
		i--;
	}
	dest_[0] = src_[0];
	return (dest_);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_;
	const unsigned char	*src_;
	size_t				i;

	dest_ = (unsigned char *)dest;
	src_ = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	if (src_ < dest_)
	{
		i = n - 1;
		dest_ = ft_transport_backwards(i, src_, dest_);
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
/*
int	main(void)
{
	char	src[] = "babybutt";
	char	*dest;

	dest = (char *)ft_memmove((void *)(src + 3), (const void *)src, 4);
	printf("%s", dest);
}
	*/