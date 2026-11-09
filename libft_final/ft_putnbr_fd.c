/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:09 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:52:11 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;
	char		c;

	devision = long_n / 10;
	remain = long_n % 10;
	if (devision > 0)
		ft_putnbr_fd(devision, fd);
	c = remain + '\0';
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr_fd(87, 1);
}
