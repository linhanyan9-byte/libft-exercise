/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:09 by username          #+#    #+#             */
/*   Updated: 2026/11/10 18:28:54 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;
	char		c;
	int			devision;
	int			remain;

	long_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
	}
	devision = long_n / 10;
	remain = long_n % 10;
	if (devision > 0)
		ft_putnbr_fd(devision, fd);
	c = remain + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-87, 1);
}
*/
