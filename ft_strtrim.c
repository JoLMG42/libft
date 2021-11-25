/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:15:22 by jtaravel          #+#    #+#             */
/*   Updated: 2021/11/24 12:38:57 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	lens1;

	if (!s1 || !set)
		return (NULL);
	lens1 = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_check(s1[i], set))
		i++;
	while (lens1 > i && ft_check(s1[lens1 - 1], set))
		lens1--;
	res = malloc(sizeof(char *) * (lens1 - i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (i < lens1)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = 0;
	return (res);
}
