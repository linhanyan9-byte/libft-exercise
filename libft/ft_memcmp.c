#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *a;
    char *b;
    a = (char *)s1;
    b = (char *)s2;
    size_t i = 0;
    while (i < n)
    {
        if (a[i] == b[i])
            i++;
        else 
            return (unsigned char)a[i] - (unsigned char)b[i];   
    }
    return 0;
    
}
#include <stdio.h>

int main()
{
    printf("%d", ft_memcmp("abceeee", "abddefs", 3));

}