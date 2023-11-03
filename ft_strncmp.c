/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:37:34 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/03 09:37:35 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > ft_strlen((char *)s1))
		n = ft_strlen((char *)s1);
	if (n > ft_strlen((char *)s2))
		n = ft_strlen((char *)s2);
	return (ft_memcmp(s1, s2, n));
}
