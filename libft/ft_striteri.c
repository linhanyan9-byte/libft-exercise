/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:41 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:43:01 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	to_lower(unsigned int c, char *s)
{
	(void)c;
	if (*s >= 'A' && *s <= 'Z')
		*s += 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[12] = "BABYBUTT";

	ft_striteri(s, &to_lower);
	printf("%s", s);
}
	*/
