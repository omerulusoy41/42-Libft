/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:40:24 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 21:01:44 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		bas;
	int		son;
	int		i;

	bas = 0;
	son = ft_strlen(s1) - 1;
	while (s1[bas] && ft_strchr(set, s1[bas]))
		bas ++;
	if (bas >= son)
		return (ft_strdup(""));
	while (son >= 0 && ft_strchr(set, s1[son]))
		son--;
	result = (char *)malloc(son - bas + 1);
	if (!result)
		return (0);
	i = 0;
	while (son > bas)
		result[i ++] = s1[bas++];
	result[i] = '\0';
	return (result);
}
