/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:54:50 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/24 16:37:46 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cpydest;
	const char	*cpysrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (n <= 0)
		return (dest);
	cpydest = dest;
	cpysrc = src;
	while (i < n)
	{
		cpydest[i] = cpysrc[i];
		i++;
	}
	dest = cpydest;
	return (dest);
}
