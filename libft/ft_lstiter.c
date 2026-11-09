#include "libft.h"
void lstcap(void *content)
{
    char *str;
    int i = 0;
    str = (char *)content;
    while (str && str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i]-=32;
        i++;
    }

}

void   ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
/*
int main(void)
{
    t_list *hey;
    t_list *duck;
    hey = malloc(sizeof(t_list));
    duck = malloc(sizeof(t_list));
    hey->content = ft_strdup("hey");
    hey->next = duck;
    duck->content = ft_strdup("duckie");
    duck->next = NULL;
    printf("%s\n", (char *)hey->content);
    printf("%s\n", (char *)duck->content);
    ft_lstiter(hey, lstcap);
    printf("%s\n", (char *)hey->content);
    printf("%s\n", (char *)duck->content);
}*/
