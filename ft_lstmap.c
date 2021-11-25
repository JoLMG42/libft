/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:40:45 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 16:54:01 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	res = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!lst)
		{
			ft_lstclear(&res, del);
			res = NULL;
		}
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}
/*
void	f(void	*test)
{
	42 + 42;
}

void	del(void *test)
{
	42 + 42;
}

int main(void)
{
	t_list	*list;
	t_list	*new;
	void	*elem;

	list = ft_lstnew(elem);
	printf("%d\n", ft_lstsize(list));
	new = ft_lstmap(list, f, del);
	printf("%d\n", ft_lstsize(new));

}*/
