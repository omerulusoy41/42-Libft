/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:15:21 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 18:31:05 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	s_len = ft_strlen(s);
	if (s_len > start)
		size = s_len - start;
	if (size > len)
		size = len;
	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, size + 1);
	return (result);
}
