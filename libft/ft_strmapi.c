#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len = 0;
    int i = 0;
    while (s[len] != '\0')
        len++;
    char *dest = malloc(sizeof(char) * (len + 1));
    while (i < len)
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
char f(unsigned int n, char c)
{
    (void)n;
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return c;
}

#include <unistd.h>
int main()
{
    char const *s = "hey baby";
    char *dest1;
    int i = 0;
    dest1 = ft_strmapi(s, f);
    while (dest1[i] != '\0')
    {
        write(1, &dest1[i], 1);
        i++;

    }    
    
}