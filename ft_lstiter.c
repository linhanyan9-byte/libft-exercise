
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
