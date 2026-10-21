#include "libft.h"
char	*ft_substr(char const *s, int start, int len)
{
    int length = 0;
    int i = 0;
    char *dest = NULL;
    
    while (s[length] != '\0')
        length++;
    if (start >= length)
        return (NULL);
    if ((length - start) >= len)
    {
        char *dest = malloc(sizeof(char) * (len + 1));
        while (i < len)
        {
            dest[i] = s[start];
            i++;
            start++;
        }
        dest[i] = '\0';
    }
    else
    {
        char *dest = malloc(sizeof(char) * ((length - start) + 1));
        while (s[start] != '\0')
        {
            dest[i] = s[start + i];
            i++;
        }
        dest[i] = '\0';
    }
    return ((char *)dest);
}
