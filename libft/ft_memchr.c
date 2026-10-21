#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    str = (char *)s;
    size_t i = 0;
    while (i < n)
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return NULL;
}

#include <stdio.h>
int main()
{
    char *s = "abcdefghijklmnopq";
    printf("%s", (char *)ft_memchr(s, 'x', 10));

}