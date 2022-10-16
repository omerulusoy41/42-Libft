/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:02:51 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 18:09:01 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;

	str = malloc(num * size);
	if (!str || size <= 0)
		return (0);
	str = ft_memset(str, '0', num * size);
	return (str);
}
