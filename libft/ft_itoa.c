#include "libft.h"

int count_digit(long int long_n, int count)
{
    if (long_n < 0)
        long_n = -long_n;
    if (long_n == 0)
        return (count);
    return (count_digit(long_n / 10, count + 1));

}

char *convert(long int long_n, char *dest, int count, int sign)
{

    if (long_n < 0)
    {
        long_n = -long_n;
    }

    if (count > 0)
    {
        count--;
        dest[count] = (long_n % 10) + '0';
        convert(long_n / 10, dest, count, sign);
    }
    return (dest);
}

#include <unistd.h>
char	*ft_itoa(int n)
{
    long int long_n = n;
    int count = 0;
    int sign = 1;

    if (long_n < 0)
        sign = -1;
    if (long_n >= 0)
        count = count_digit(long_n, count);
    else
        count = count_digit(long_n, count) + 1;
    char *dest = malloc(sizeof(char) * (count + 1));
    dest[count] = '\0';
    dest = convert(long_n, dest, count, sign);
    //be careful of the '-' handling// 
    //the first time i put it in the recursion as dest[count] = '-'//
    // and it overwrite every index in dest in calling the recurssive function.//
    if (sign == -1)
        dest[0] = '-';
    return (dest);
}

int main()
{
    int i = 0;
    char *dest = ft_itoa(-197);
    while (dest[i] != '\0')
    {
        write(1, &dest[i], 1);
        i++;
    }
}


/*
#include <stdio.h>
int main()
{
    printf("%d", count_digit(-222215762, 0));
}
*/