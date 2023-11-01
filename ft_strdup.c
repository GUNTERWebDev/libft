/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:49:07 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 08:49:10 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
