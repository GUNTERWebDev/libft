/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:18:17 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 09:18:20 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	int		dlen;
	int		slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	j = dlen;
	if (size <= 0 || size < j)
		return (size + slen);
	while (src[i] && i < size - 1 - j)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[i + j] = '\0';
	return (dlen + slen);
}
