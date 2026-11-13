/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:02:35 by halin             #+#    #+#             */
/*   Updated: 2026/11/13 11:38:55 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	del(void *content)
{
	free(content);
} */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	while (*lst)
	{
		head = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = head;
	}
}
/*
int	main(void)
{
	t_list *new;
	t_list *hey;
	t_list *duck;
	new = malloc(sizeof(t_list));
	hey = malloc(sizeof(t_list));
	duck = malloc(sizeof(t_list));
	new->content = ft_strdup("wowwwww");
	hey->content = ft_strdup("hey");
	hey->next = duck;
	duck->content = ft_strdup("duckie");
	duck->next = NULL;
	ft_lstadd_front(&hey, new);
	ft_lstclear(&hey, del);
	printf("%p\n", hey);
}*/