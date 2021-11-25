/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:56:33 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/24 18:40:41 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cpydest;
	const char	*cpysrc;
	size_t		i;

	cpydest = dest;
	cpysrc = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if ((size_t)(dest - src) < n)
	{
		i = n - 1;
		while (i < n)
		{
			cpydest[i] = cpysrc[i];
			i--;
		}
	}
	while (i < n)
	{
		cpydest[i] = cpysrc[i];
		i++;
	}
	dest = cpydest;
	return (dest);
}
