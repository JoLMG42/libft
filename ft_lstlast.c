/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:02 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/22 18:11:21 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
/*
int main(void)
{
	t_list	*list;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	void	*new = 3;
	void	*new2 = 42;
	int	i = 3;

	elem1 = ft_lstnew(new);
	elem2 = ft_lstnew(new);
	elem3 = ft_lstnew(new2);
	elem1->next = elem2;
	elem2->next = elem3;
	list = elem1;
	while (i != 0)
	{
		printf("%d\n", *list);
		list = list->next;
		i--;
	}
	elem3 = ft_lstlast(list);
	printf("LAST ELEM = %d\n", *elem3);
}*/
