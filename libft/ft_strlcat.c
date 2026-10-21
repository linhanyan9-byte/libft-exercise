#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t length_dst = 0;
    size_t length_src = 0;
    while (dst[length_dst] != '\0')
        length_dst++;
    while (src[length_src] != '\0')
        length_src++;
    // "+1" is for the terminator slot//
    if (dstsize < length_dst + 1)
        return (length_dst + length_src);
    while (length_dst + i < dstsize - 1 && src[i] != '\0')
    {
        dst[length_dst + i] = src[i];
        i++; 
    }
    dst[length_dst + i] = '\0';
    return (length_dst + length_src);
}