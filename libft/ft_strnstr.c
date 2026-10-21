#include "libft.h"
char	*ft_strnstr( char *big,  char *little, int len)
{
    int i = 0;
    int j = 0;

    if (little[0] == '\0')
        return (big);
    while (i < len)
    {
        while ((i + j) < len && big[i + j] == little[j] && big[i + j] != '\0' && little[j] != '\0')
            j++;
        if (little[j] == '\0')
            return (&big[i]);
        if (big[i+j] == '\0' && little[j] != '\0')
            return NULL;
        i++;
        j = 0;
    }
    return NULL;

}

#include <stdio.h>
int main()
{
    char *big = "bubblebutt";
    char *little = "butt";
    printf("%s",ft_strnstr(big, little, 2));
}