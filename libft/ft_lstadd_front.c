/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:50:59 by username          #+#    #+#             */
/*   Updated: 2026/11/09 11:51:02 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	//you need to update the **(head pointer) to be the new//
	*lst = new;
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

printf("%s", (char *)new->content);
printf("%s", (char *)new->next->content);
printf("%s", (char *)new->next->next->content);
}
*/
