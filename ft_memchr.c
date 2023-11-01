/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:12:48 by ousabbar          #+#    #+#             */
/*   Updated: 2023/10/31 17:12:51 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*arr;
	char	k;
	size_t	i;

	arr = (char *)s;
	k = (char)c;
	i = 0;
	if (!arr)
		return (NULL);
	while (i < n)
	{
		if (arr[i] == k)
			return (arr + i);
		i++;
	}
	return (NULL);
}
