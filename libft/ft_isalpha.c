/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:46:09 by username          #+#    #+#             */
/*   Updated: 2026/11/10 10:21:10 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
    printf("Letters:\n");
    printf("A: %d\n", ft_isalpha('A'));
    printf("z: %d\n", ft_isalpha('z'));
    printf("\nNumbers:\n");
    printf("5: %d\n", ft_isalpha('5'));
    printf("0: %d\n", ft_isalpha('0'));
    return (0);
}
*/