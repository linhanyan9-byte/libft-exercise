/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:40:47 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:48:06 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_sign(const char *nptr, int i, int *sign)
{
	if (nptr[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		*sign = 1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign_value;
	int	*sign;

	sign = &sign_value;
	*sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	i = ft_check_sign(nptr, i, sign);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (nptr[i] - '0') + result * 10;
		i++;
	}
	if (*sign == -1)
		return (-result);
	return (result);
}
/*
int	main(void)
{
printf("%d\n", ft_atoi("123"));
printf("%d\n", ft_atoi("-123"));
printf("%d\n", ft_atoi("+456"));
printf("%d\n", ft_atoi("   789"));
printf("%d\n", ft_atoi("   -42"));
printf("%d\n", ft_atoi("42abc"));
printf("%d\n", ft_atoi("abc42"));
printf("%d\n", ft_atoi("+-42"));
return (0);
}*/