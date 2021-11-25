/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 23:29:45 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/24 16:14:40 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cpy;

	cpy = (void *)malloc(nmemb * size);
	if (!cpy)
		return (NULL);
	ft_bzero(cpy, nmemb * size);
	return (cpy);
}
