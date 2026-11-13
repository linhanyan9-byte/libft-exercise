/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:41:42 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:32:11 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main(void)
{
    printf("Letters:\n");
    printf("A: %d\n", ft_isalnum('A'));
    printf("z: %d\n", ft_isalnum('z'));

    printf("\nNumbers:\n");
    printf("5: %d\n", ft_isalnum('5'));
    printf("0: %d\n", ft_isalnum('0'));

    printf("\nSpecial characters:\n");
    printf("@: %d\n", ft_isalnum('@'));
    printf("!: %d\n", ft_isalnum('!'));
    printf("Space: %d\n", ft_isalnum(' '));

    return (0);
}
	*/