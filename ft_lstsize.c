/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:12:10 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 03:02:23 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int	i;
	t_list	**list;
	t_list	*elem;
	t_list	*tmp;

	void	*new;
	elem = ft_lstnew(new);
	elem->next = ft_lstnew(new);
	//elem->next->next = ft_lstnew(new);

	printf("%d\n", ft_lstsize(elem));
}
*/
