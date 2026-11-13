/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halin <halin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:08:46 by halin             #+#    #+#             */
/*   Updated: 2026/11/13 11:39:21 by halin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	lstcap(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)content;
	while (str && str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int	main(void)
{
	t_list *hey;
	t_list *duck;
	hey = malloc(sizeof(t_list));
	duck = malloc(sizeof(t_list));
	hey->content = ft_strdup("hey");
	hey->next = duck;
	duck->content = ft_strdup("duckie");
	duck->next = NULL;
	printf("%s\n", (char *)hey->content);
	printf("%s\n", (char *)duck->content);
	ft_lstiter(hey, lstcap);
	printf("%s\n", (char *)hey->content);
	printf("%s\n", (char *)duck->content);
}*/
