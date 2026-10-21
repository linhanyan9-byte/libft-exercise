#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int count = 0;
    int k = 0;

    while (set[k] != '\0')
    {
        if (s1[i] == set[k])
        {
            i++;
            k = 0;
        }
        else
            k++;
    }
    while (s1[len] != '\0')
        len++;
    k = 0;
    while (set[k] != '\0')
    {
        if (len > i && s1[len - 1] == set[k] )
        {
            len--;
            k = 0;
        }
        else
            k++;
    }

    count = len - i;
    char *dest = malloc(sizeof(char) * (count + 1));
    if (dest == NULL)
        return NULL;
    while (j < count)
    {
        dest[j] = s1[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    printf("%s",ft_strtrim("abc bubble butt    bbc", "abc"));
}