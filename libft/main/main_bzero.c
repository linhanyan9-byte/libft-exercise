#include "libft.h"
int main()
{
    char username[10] = "alex";
    ft_bzero(username, 1);
    printf("%s\n", username);
}