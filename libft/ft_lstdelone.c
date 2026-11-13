/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:03:05 by halin             #+#    #+#             */
/*   Updated: 2026/11/12 14:19:38 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}
	*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
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
	new->content = ft_strdup("wowwwww");
	hey->content = ft_strdup("hey");
	hey->next = duck;
	duck->content = ft_strdup("duckie");
	duck->next = NULL;
    printf("%s\n", (char *)hey->content);
	ft_lstdelone(hey, del);
	printf("%s\n", (char *)hey->content);
}
    */