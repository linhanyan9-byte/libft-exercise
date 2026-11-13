/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:10 by username          #+#    #+#             */
/*   Updated: 2026/11/12 12:49:19 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*prt;
	char	char_c;

	char_c = (unsigned char)c;
	prt = (char *) s;
	while (*prt)
		prt++;
	while (prt != s)
	{
		if (*prt == char_c)
			return (prt);
		else
			prt--;
	}
	if (*prt == char_c)
		return (prt);
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "babybutt";
	char		*result;

	result = ft_strrchr(s, 'b');
	printf("%s", result);
}
	*/