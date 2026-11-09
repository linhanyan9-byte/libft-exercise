/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:41 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:52:44 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
void ft_tolower(unsigned int i, char *c)
{
(void)i;
if (*c >= 'A' && *c <= 'Z')
*c+=32;
}

int main(void)
{
char s[5] = "SDFH";
int i;
char *test;

i = 0;
ft_striteri(s, ft_tolower);
while (s[i])
{
write(1, &s[i], 1);
i++;
}
return (0);
}
*/
