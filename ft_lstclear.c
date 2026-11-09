void *del(void *content)
{
    free(content);
}
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_lst *temp;
    
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst) = temp;
    }
}