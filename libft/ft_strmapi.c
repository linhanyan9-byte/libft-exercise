/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:37:10 by username          #+#    #+#             */
/*   Updated: 2026/11/09 12:44:13 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*s1;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	s1 = malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char ft_tolower(unsigned int i, char c)
{
(void)i;
if (c >= 'A' && c <= 'Z')
c+=32;
return (c);
}

int main(void)
{
char s[5] = "SDFH";
int i;
char *test;

i = 0;
test = ft_strmapi(s, ft_tolower);
//remember to check malloc for test as wwll//
if (!test)
return (1);
while (test[i])
{
write(1, &test[i], 1);
i++;
}
free(test);
return (0);
}
*/
