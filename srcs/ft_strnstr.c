/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:32:35 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 17:01:30 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *str, const char *ara, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ara)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && ara[j] && (i + j) < len
			&& str[i + j] == ara[j])
		{
			j++;
			if (!ara[j])
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}	
