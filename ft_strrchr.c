/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:00:52 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 09:00:53 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	k;
	int		i;

	i = 0;
	k = (char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == k)
			return (str + i);
		i++;
	}
	return (NULL);
}
