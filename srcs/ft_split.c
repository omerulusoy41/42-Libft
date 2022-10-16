/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:02:45 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 21:44:48 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s != c)
			s++;
		if (*s)
			count++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static int	word_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*bring_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		wordsize;

	wordsize = word_size(s, c);
	i = 0;
	word = (char *)malloc(wordsize + 1);
	while (i < wordsize)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char *) * count_word(s, c) + 1);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			split[i] = bring_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	split[i] = 0;
	return (split);
}
