/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:49:32 by username          #+#    #+#             */
/*   Updated: 2026/11/10 10:24:40 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
    printf("Letters:\n");
    printf("A: %d\n", ft_isdigit('A'));
    printf("z: %d\n", ft_isdigit('z'));
    printf("\nNumbers:\n");
    printf("5: %d\n", ft_isdigit('5'));
    printf("0: %d\n", ft_isdigit('0'));
    return (0);
}
	*/