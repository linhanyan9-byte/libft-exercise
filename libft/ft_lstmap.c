/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:09:39 by halin             #+#    #+#             */
/*   Updated: 2026/11/13 13:25:14 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*put_h(void *content)
{
	char	*str;

	(void)content;
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = 'h';
	str[1] = '\0';
	return (str);
} 

void	del(void *content)
{
	free(content);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	void	*new_content;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	dup = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&dup, *del);
			return (NULL);
		}
		ft_lstadd_back(&dup, new_node);
		lst = lst->next;
	}
	return (dup);
}

/* int	main(void)
{
	t_list	*hey;
	t_list	*duck;
	t_list	*new_lst;

	hey = malloc(sizeof(t_list));
	duck = malloc(sizeof(t_list));
	hey->content = ft_strdup("hey");
	hey->next = duck;
	duck->content = ft_strdup("duckie");
	duck->next = NULL;
	printf("%s\n", (char *)hey->content);
	printf("%s\n", (char *)duck->content);
	new_lst = ft_lstmap(hey, put_h, del);
	printf("%s\n", (char *)new_lst->content);
	printf("%s\n", (char *)new_lst->next->content);
} */