/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:57 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 17:51:05 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	word_count(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		count++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

int	s_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**trim(char const *s, char c, char **arr)
{
	int	j;
	int	k;
	int	word_len;

	k = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		word_len = s_len(s, c);
		arr[k] = malloc(sizeof(char) * (word_len + 1));
		if (!arr[k])
			return (NULL);
		while (*s != c && *s)
		{
			arr[k][j] = *s;
			j++;
			s++;
		}
		arr[k][j] = '\0';
		k++;
		j = 0;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	char	**arr;

	words_count = word_count((char *)s, c);
	arr = malloc(sizeof(char *) * words_count);
	if (!arr)
		return (NULL);
	arr = trim(s, c, arr);
	return (arr);
}
