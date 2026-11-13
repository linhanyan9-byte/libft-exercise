/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:27 by username          #+#    #+#             */
/*   Updated: 2026/11/12 12:42:00 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*prt;
	char	char_c;

	char_c = (unsigned char)c;
	prt = (char *)s;
	while (*prt)
	{
		if (*prt == char_c)
			return ((char *)prt);
		else
			prt++;
	}
	if (char_c == '\0')
		return (prt);
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "babybutt";
	char		*result;

	result = ft_strchr(s, 'b');
	printf("%s", result);
}
	*/