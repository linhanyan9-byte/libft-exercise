#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i = 0;
    while (s[i] != '\0')
    {
        f(i, s);
        write(1, &s[i], 1);
        i++;
    }
        
}


void f(unsigned int i, char *s)
{
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 32;
}

int main()
{
    char s[] = "hiii baby";
    ft_striteri(s, f);
}