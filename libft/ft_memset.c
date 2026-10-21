#include "libft.h"
void	*ft_memset(void *s, int c, int n)
{
    int i = 0;
    int *prt;
    prt = (int *)s;
    while (i < n)
    {
        prt[i] = c;
        i++;
    }
    return (s);
}

#include <stdio.h>
int main()
{
    int x = 0;
    printf("%d", *(int *)ft_memset(&x, 13, 1));
}

