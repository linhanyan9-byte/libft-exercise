/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:39:33 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:37:37 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_count(long int long_n)
{
	int	count;

	count = 0;
	while (long_n > 0)
	{
		long_n = long_n / 10;
		count++;
	}
	return (count);
}

static char	*ft_malloc_n_positive_or_0(int n, char *nbr, int count)
{
	if (n == 0)
	{
		nbr = malloc(sizeof(char) * (2));
		if (!nbr)
			return (NULL);
		nbr[0] = '0';
		nbr[1] = '\0';
		return (nbr);
	}
	nbr = malloc(sizeof(char) * (count + 1));
	if (!nbr)
		return (NULL);
	return (nbr);
}

static char	*ft_malloc_n_negative(char *nbr, int count)
{
	nbr = malloc(sizeof(char) * (count + 2));
	if (!nbr)
		return (NULL);
	return (nbr);
}

static char	*ft_write_in_memory(long int long_n, char *nbr, int count, int n)
{
	count -= 1;
	while (long_n != 0)
	{
		nbr[count] = (long_n % 10) + '0';
		long_n = long_n / 10;
		if (long_n == 0 && n > 0)
			break ;
		count--;
	}
	if (n < 0)
		nbr[count] = '-';
	return (nbr);
}

char	*ft_itoa(int n)
{
	int			count;
	long int	long_n;
	char		*nbr;

	nbr = NULL;
	long_n = n;
	if (long_n < 0)
		long_n = -long_n;
	count = ft_get_count(long_n);
	if (n >= 0)
	{
		nbr = ft_malloc_n_positive_or_0(n, nbr, count);
		if (n == 0)
			return (nbr);
	}
	if (n < 0)
		nbr = ft_malloc_n_negative(nbr, count);
	if (!nbr)
		return (NULL);
	if (n < 0)
		count++;
	nbr[count] = '\0';
	nbr = ft_write_in_memory(long_n, nbr, count, n);
	return (nbr);
}
/*
int	main(void)
{
	char	*nbr;

	nbr = ft_itoa(88888);
	if (!nbr)
		return (1);
	printf("%s", nbr);
	free(nbr);
	return (0);
}
	*/