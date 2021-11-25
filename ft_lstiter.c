/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:34:58 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/23 10:58:52 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void	*data)
{
	data = data + 42;
	printf("%d\n", data);
}

int main(void)
{
	t_list	*list;
	void	*elem = 42;
	void	*elem1 = 10;

	list = ft_lstnew(elem);
	list->next = ft_lstnew(elem1);
	ft_lstiter(list, f);
}*/
