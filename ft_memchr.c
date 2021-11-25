/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:45:49 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/20 17:00:04 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*cpys;

	i = 0;
	cpys = s;
	while (i < n)
	{
		if (cpys[i] == (unsigned char)c)
			return ((void *)&cpys[i]);
		i++;
	}
	return (NULL);
}
