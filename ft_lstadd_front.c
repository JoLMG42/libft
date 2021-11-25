/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:46:48 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 14:08:12 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (*alst)
	{
		tmp = new;
		tmp->next = *alst;
		*alst = tmp;
	}
	else
	{
		*alst = new;
		new->next = NULL;
	}
}
/*
int main(void)
{
	t_list	**alst;
	t_list	*elem;
	t_list	*elem2;
	t_list	*tmp;
	void	*new;

	tmp = ft_lstnew(new);
	elem = ft_lstnew(new);
	*alst = NULL;
	elem2 = ft_lstnew(new);
	elem->next = elem2;
	*alst = elem;
	ft_lstadd_front(alst, tmp);
	while ((*alst)->next)
	{
		printf("%p\n", *alst);
		(*alst) = (*alst)->next;
	}
	printf("%d\n", ft_lstsize(*alst));
}*/
