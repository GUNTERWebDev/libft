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
	char		*str;
	char		k;
	int			i;
	size_t		len;

	i = 0;
	k = (char)c;
	str = (char *)s;
	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		if (str[len] == k)
			return (str + len);
		len--;
	}
	return (NULL);
}
