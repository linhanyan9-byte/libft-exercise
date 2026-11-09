/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:50:50 by username          #+#    #+#             */
/*   Updated: 2026/11/09 13:07:16 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
    if (*lst == NULL)
    {
        *lst = *new;
        return ;
    }
	while ((*lst)->next)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
	*lst = *temp;
}

/* int main(void)
{
t_list *hey;
t_list *duck;
t_list *queen;

queen = malloc(sizeof(t_list));
hey = malloc(sizeof(t_list));
duck = malloc(sizeof(t_list));
if(!queen || !hey || !duck)
return (1);
hey->content = "hey";
hey->next = duck;
duck->content = "duckie";

queen->next = NULL;
queen->content = "queen";
ft_lstadd_back(&hey, queen);

printf("%s", (char *)hey->content);
printf("%s", (char *)hey->next->content);
printf("%s", (char *)hey->next->next->content);

free(hey);
free(duck);
free(queen);
} */
