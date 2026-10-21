#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
    int i = 0;
    char C = (char)c;

    while (s[i] != '\0')
    {
        if (s[i] == C)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == '\0')
    {
        if (C == '\0')
            return ((char *)&s[i]);
        else
            return (NULL);
    }
    return (NULL);
}