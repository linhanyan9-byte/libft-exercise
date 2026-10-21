#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, int n)
{
    char *a;
    char *b;
    a = (char *)dest;
    b = (char *)src;
    int i = 0;
    while (i < n)
    {
        a[i] = b[i];
        i++;
    }
    return dest;
}
#include <stdio.h>
int main()
{
    int i = 0;
    int dest[] = {0, 0, 0, 0, 0};
    int src[] = {12, 13, 14, 15};
    ft_memcpy(dest, src, 16);
    while (i <= 4)
    {
        printf("%d\n", dest[i]);
        i++;

    }
}