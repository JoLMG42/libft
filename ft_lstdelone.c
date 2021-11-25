/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:22:57 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 02:51:13 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
void	del(void *test)
{
	42 + 42;
}

int main(void)
{
	t_list	*elem;
	void	*new;

	elem = ft_lstnew(new);
	elem->next = ft_lstnew(new);
	elem->next->next = ft_lstnew(new);

	ft_lstdelone(elem, del);
	printf("%d\n", ft_lstsize(elem));
}*/
