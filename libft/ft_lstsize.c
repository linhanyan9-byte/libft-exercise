/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:51:16 by username          #+#    #+#             */
/*   Updated: 2026/11/10 18:29:32 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
printf("%d", ft_lstsize(new));
}
*/
