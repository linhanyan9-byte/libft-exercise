#include <unistd.h>
#include <stdlib.h>
char *ft_itoa(int n)
{
    int count;
    long int original;
    long int long_n;
    char *nbr;
    int i;
    long_n = n;
    original = long_n;
    count = 0;

    if (long_n < 0)
        long_n = -long_n;
    while (long_n > 0)
    {
        long_n = long_n / 10;
        count++;
    }
    if (n > 0)
    {
        nbr = malloc(sizeof(char) * (count + 1));
        if (!nbr)
            return (NULL);
        i = count;
    }
    else if (n < 0)
    {
        i = count + 1;
        nbr = malloc(sizeof(char) * (count + 2));
        if (!nbr)
            return (NULL);
    }
    else if (n == 0)
    {
        nbr = malloc(sizeof(char) * (2));
        if (!nbr)
            return (NULL);
        nbr[0] = '0';
        nbr[1] = '\0';
        return (nbr);
    }
    nbr[i] = '\0';
    i--;
    if (original < 0)
        original = -original;
    while (original != 0)
    {
        nbr[i] = (original % 10) + '0';
        original = original / 10;
        if (original == 0 && n > 0)
            break ;
        i--;
    }
    if (n < 0)
        nbr[i] = '-';
    return (nbr);
}

int main(void)
{
    char *nbr;

    nbr = ft_itoa(0);
    if (!nbr)
        return (1);

    write(1, nbr, 1);
    free(nbr);
    return (0);
}