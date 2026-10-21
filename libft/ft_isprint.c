#include "libft.h"
int	ft_isprint(int c)
{
// be aware, ' '(space) is also printable//
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}