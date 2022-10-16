/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:05 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 12:01:18 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char	*str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)(c))
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
