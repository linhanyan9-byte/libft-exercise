void del(void *content)
{
    free(content);
}
void *putchar(void *content)
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
    char *content_duplicate;

    t_list *dup;
    t_list *next_dup;
    t_list *store_dup;
    
    dup = malloc(sizeof(t_list));
    store_dup = dup;
    
    if (!dup){
        return NULL;
    }

    // Check that the list doesnt end on a single t_list 

    while (lst)
    {
        content_duplicate = f(lst->content);
        
        if (!content_duplicate){
            return NULL;
        }
        
        next_dup = malloc(sizeof(t_list));    
        
        if (!next_dup){
            return NULL;
        }
        
        dup->content = content_duplicate;
        dup->next = next_dup;
        // dup = next_dup;

        // If the next pointer is null we stop and dont iterate
        if (lst->next == NULL){
            break;
        }

        lst = lst->next;
        dup = dup->next;
    
    }

    dup->next = NULL;
    return store_dup;

}

int main(void)
{
    lst->content = "1";
    lst->
}