/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:51:46 by ousabbar          #+#    #+#             */
/*   Updated: 2023/10/31 09:51:55 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	k;
	char	*arr;

	i = 0;
	k = (unsigned char)c;
	arr = (char *)s;
	while (i < n)
	{
		arr[i] = k;
		i++;
	}
	return (arr);
}
