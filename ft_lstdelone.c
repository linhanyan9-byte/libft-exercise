void del(void *content)
{
    free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    //avoiding segmentation fault due to deference a null pointer//
    if (!lst)
        return;
    del(lst->content);
    free(lst);
}
