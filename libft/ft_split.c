/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:21 by username          #+#    #+#             */
/*   Updated: 2026/11/13 11:59:25 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_allocate_map(char **map, int i, int size)
{
	map[i] = malloc(sizeof(char) * (size + 1));
	if (!map[i])
	{
		while (i > 0)
		{
			i--;
			free(map[i]);
		}
		free(map);
		return (NULL);
	}
	return (map);
}

static int	ft_get_size(char c, char const *s, int *end, int *start)
{
	int	size;

	size = 0;
	while (s[(*end)] == c && s[(*end)])
		(*end)++;
	*start = *end;
	while (s[(*end)] != c && s[(*end)])
		(*end)++;
	size = *end - *start;
	return (size);
}

static char	**ft_transport(char const *s, int i, char c, char **map)
{
	int	end;
	int	start;
	int	size;
	int	j;

	end = 0;
	start = 0;
	while (s[end])
	{
		j = 0;
		size = ft_get_size(c, s, &end, &start);
		if (size > 0)
		{
			map = ft_allocate_map(map, i, size);
			if (!map)
				return (NULL);
			while (j < size)
				map[i][j++] = s[start++];
			map[i][j] = '\0';
			i++;
		}
	}
	map[i] = NULL;
	return (map);
}

char	**ft_split(char const *s, char c)
{
	char	**map;
	int		i;
	int		word;

	if (!s)
		return (NULL);
	i = 0;
	word = ft_count_words(s, c);
	map = malloc(sizeof(char *) * (word + 1));
	if (!map)
		return (NULL);
	map = ft_transport(s, i, c, map);
	if (!map)
		return (NULL);
	return (map);
}

/* int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello!", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */
