/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:41:37 by username          #+#    #+#             */
/*   Updated: 2026/11/09 12:41:15 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	//consider the overflow//
	if (nmemb == 0 || size == 0 || nmemb > (size_t) - 1 / size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	while (i < nmemb * size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
