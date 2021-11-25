/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:22:26 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/17 21:55:00 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*cpys1;
	unsigned const char		*cpys2;

	cpys1 = s1;
	cpys2 = s2;
	i = 0;
	while (i < n)
	{
		if (cpys1[i] != cpys2[i])
			return (cpys1[i] - cpys2[i]);
		i++;
	}
	return (0);
}
