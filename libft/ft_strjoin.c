#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int len_s1 = 0;
    int len_s2 = 0;
    while (s1[len_s1] != '\0')
        len_s1++;
    while (s2[len_s2] != '\0')
        len_s2++;
    char *dest = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    while (*s1 != '\0')
    {
        dest[i] = *s1;
        i++;
        s1++; 
    }
    while (*s2 != '\0')
    {
        dest[i] = *s2;
        i++;
        s2++;
    }
    dest[i] = '\0';
    return (dest);
}