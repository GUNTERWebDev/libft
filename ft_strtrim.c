/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:03:04 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 13:03:06 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen((char *)s1);
	while (ft_strchr(set, *s1))
		s1++;
	len--;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
