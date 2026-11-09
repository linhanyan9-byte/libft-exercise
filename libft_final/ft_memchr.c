/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:19 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:51:21 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i = 0;

	s1 = (const unsigned char *) s;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (NULL);
}
