/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:59:18 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 03:31:08 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		tmp = list->next;
		ft_lstdelone(list, del);
		list = tmp;
	}
	*lst = NULL;
}
/*
void	del(void *del)
{
	42 + 42;
}

int main(void)
{
	t_list	**list;
	t_list	*tmp;
	t_list	*elem;
	t_list	*elem2;
	void	*new;

	elem2 = ft_lstnew(new);
	tmp = ft_lstnew(new);
	*list = NULL;
	elem = ft_lstnew(new);
	tmp->next = elem;
	elem->next = elem2;
	elem2->next = ft_lstnew(new);
	*list = tmp;
	
	//ft_lstclear(list, del);
	printf("%d\n", ft_lstsize(*list));
}*/
