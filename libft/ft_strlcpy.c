#include "libft.h"
int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
    int i = 0;
    int length = 0;

    while (src[length] != '\0')
        length++;
    //dont forget if dstsize is 0//
    if (dstsize == 0)
        return (length);
    // honestly, you dont need to separate into two cases. it will always copy up to (dstsize-1)//
    if (dstsize > length)
    {
        while (src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = 0;
    if (dstsize <= length)
    {
        while (i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (length);
}