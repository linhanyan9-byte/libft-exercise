#include "libft.h"
void ft_putstr_ft(char *str, int fd)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(fd, &str[i], 1);
        i++;
    }
}