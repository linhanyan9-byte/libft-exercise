/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:06 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:51:08 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	//while (lst->next)
	while (lst)
	{
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
t_list *new;
t_list *hey;
t_list *duck;
new = malloc(sizeof(t_list));
hey = malloc(sizeof(t_list));
duck = malloc(sizeof(t_list));
new->content = "wowwwww";
hey->content = "hey";
hey->next = duck;
duck->content = "duckie";
duck->next = NULL;
ft_lstadd_front(&hey, new);
printf("%s", (char *)ft_lstlast(new)->content);
}
*/
