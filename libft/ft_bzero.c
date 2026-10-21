#include "libft.h"
void	ft_bzero(void *s, int n)
{
    char *str;
    str = (char *)s;
    int i = 0;
    while (i < n)
    {
        str[i] = '\0';
        i++;
    }
}