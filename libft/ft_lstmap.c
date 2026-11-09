#include "libft.h"

void del(void *content)
{
    free(content);
}

void *put_h(void *content)
{
    char *str;
    (void)content;
    str = malloc(sizeof(char) * 2);
    if (!str)
        return NULL;
    str[0] = 'h';
    str[1] = '\0';
    return (str);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *dup_head;
    t_list *dup;

    if (!lst)
        return (NULL);
    dup = malloc(sizeof(t_list));
    if (!dup)
        return NULL;
    dup_head = dup;
    while(lst)
    {
        dup->content = f(lst->content);
        if (lst->next)
        {
            dup->next = malloc(sizeof(t_list));
            if (!dup->next)
            {
                ft_lstclear(&dup_head, *del);
                return NULL;
            }
        }
        else
            dup->next = NULL;
        dup = dup->next;
        lst = lst->next;
    } 
    return (dup_head);
}

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
}