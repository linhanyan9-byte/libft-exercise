#include "libft.h"
void	*ft_memmove(void *dest, const void *src, int n)
{
    char *a;
    char *b;
    char *prt_a;
    char *prt_b;
    //using pointers to do the backward//
    a = (char *)src;
    b = (char *)dest;
    if (a < b)
    {
        if (n < 1)
            return dest;
        prt_b = b + n - 1;
        prt_a = a + n - 1;
        //be careful, the pointer cannt read before the starter of that array//
        while (prt_b > b)
        {
            *prt_b = *prt_a;
            prt_a--;
            prt_b--;
        }
        *prt_b = *prt_a;

    }

    //now tring index to do the forward//
    if (a > b)
    {
        int i = 0;
        while (i < n)
        {
            b[i] = a[i];
            i++;
        }

    }
    
    return (dest);
}

//confusing note in data conversion: the function is interpreting byte by byte, but the (int *) type cnversion is not 
//deciding how many bytes to read per time, but how many byes are to be grouped together to read as one//
//n is a byte count, not an data type count//
/*
#include <stdio.h>
int main()
{
    int i;
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int *final1;
    int *final2;

    final1 = (int *)ft_memmove(array1 + 2, array1, 8);
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", array1[i]);
    }
    printf("\n");
    final2 = (int *)ft_memmove(array2, array2 + 2, 8);
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", array2[i]);
    }


}
*/