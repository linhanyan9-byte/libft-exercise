/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:52:35 by username          #+#    #+#             */
/*   Updated: 2026/11/10 15:28:56 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	length = 0;
	while (s[length] != '\0')
		length++;
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	while (*s != '\0')
	{
		dest[i] = *s;
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char *src;
    char *dest;

    src = "duckieee";
    dest = ft_strdup(src);
    if (!dest)
        return (1);
    printf("Original: %s\n", src);
    printf("Duplicate: %s\n", dest);
    free(dest);
}
	*/
