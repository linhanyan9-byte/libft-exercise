/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:41:37 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:31:59 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	mem = ft_memset(mem, 0, nmemb * size);
	return (mem);
}
/*
int	main(void)
{
	char	*str;
	int		*numbers;

	str = ft_calloc(4, 1);
	numbers = ft_calloc(4, sizeof(int));
	printf("str: %s\n", str);
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
		numbers[3]);
	return (0);
}
*/