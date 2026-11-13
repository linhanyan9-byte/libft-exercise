/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:41:23 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:21:48 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
char	str[] = "Hello World";
int	numbers[] =
{
10, 20, 30, 40
};
printf("Before ft_bzero:\n");
printf("str: %s\n", str);
printf("numbers: %d %d %d %d\n",
numbers[0], numbers[1], numbers[2], numbers[3]);
ft_bzero(str, 5);
ft_bzero(numbers, sizeof(int) * 2);
printf("\nAfter ft_bzero:\n");
printf("str: %s\n", str);
printf("numbers: %d %d %d %d\n",
numbers[0], numbers[1], numbers[2], numbers[3]);
return (0);
}*/
