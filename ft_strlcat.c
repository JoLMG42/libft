/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:22:42 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/21 02:07:39 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dstlen;
	size_t		srclen;
	size_t		l;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	l = size - dstlen - 1;
	if (dstlen < size - 1 && size > 0)
	{
		while (src[i] && i < l)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + srclen);
}
