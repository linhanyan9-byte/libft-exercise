#include "libft.h"
char	*ft_strdup(const char *s)
{
    int i = 0;
    int length = 0;
    while (s[length] != '\0')
        length++;
    char *dest = malloc(sizeof(char) * (length + 1));
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