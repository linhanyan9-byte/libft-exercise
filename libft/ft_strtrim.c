/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:12 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:43:56 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_start(char const *s1, char const *set)
{
	size_t	start;
	int		j;

	start = 0;
	while (s1[start])
	{
		j = 0;
		while (set[j])
		{
			if (s1[start] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		start++;
	}
	return (start);
}

static int	ft_check_end(char const *s1, char const *set, int start, int len_s1)
{
	int	end;
	int	j;

	end = len_s1;
	while (end > start)
	{
		j = 0;
		while (set[j])
		{
			if (s1[end - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		end--;
	}
	return (end);
}

static char	*ft_transport_trim(char *trim, int end, int start, char const *s1)
{
	int	i;

	i = 0;
	trim = malloc(sizeof(char) * (end - start) + 1);
	if (!trim)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len_s1;
	size_t	i;
	size_t	start;
	size_t	end;

	trim = NULL;
	i = 0;
	start = 0;
	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	if (len_s1 == 0)
	{
		trim = malloc(1);
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set, start, len_s1);
	trim = ft_transport_trim(trim, end, start, s1);
	return (trim);
}
/*
int	main(void)
{
	char	*trim;

	trim = ft_strtrim("xxxHello duckxxx", "x");
	printf("%s\n", trim);
	free(trim);
}
	*/
