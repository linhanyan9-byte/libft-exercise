#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long int long_int = n;
    if (long_int < 0)
    {
        long_int = -long_int;
        write(fd, "-", 1);
    }
    char c;
    if (long_int >= 10)
        ft_putnbr_fd(long_int / 10, fd);
    c = long_int % 10 + '0';
    write(fd, &c, 1);
    return ;
}