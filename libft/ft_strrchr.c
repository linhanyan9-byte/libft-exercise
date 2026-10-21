#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
    int length = 0;
    unsigned char uc = (unsigned char)c;
    while (s[length] != '\0')
        length++;
    if (uc == '\0')
        return ((char *)&s[length]);
    while (length >= 0)
    {
        if (s[length] == uc)
            return ((char *)&s[length]);
        length--;
    }
    return (NULL);
}