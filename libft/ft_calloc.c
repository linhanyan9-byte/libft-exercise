#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
    size_t i = 0;
    char *mem = malloc(size * count);
    if (mem == NULL)
        return NULL;
    while (i < count * size)
    {
        mem[i] = '\0';
        i++;
    }
    return mem;
}