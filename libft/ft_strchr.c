/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:27 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:52:32 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*prt;

	prt = s;
	while (*prt)
	{
		if (*prt == c)
			return (prt);
		else
			prt++;
	}
	if (c == 0)
		return (prt);
	return (NULL);
}
