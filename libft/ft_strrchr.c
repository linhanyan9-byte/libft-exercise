/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:10 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:53:11 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*prt;

	prt = (char *) s;
	while (*prt)
		prt++;
	while (prt != s)
	{
		if (*prt == c)
			return (prt);
		else
			prt--;
	}
	if (*prt == c)
		return (prt);
	return (NULL);
}
