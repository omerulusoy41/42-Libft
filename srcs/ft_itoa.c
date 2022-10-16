/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:19:42 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 22:57:52 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	digit(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		count ++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

static char	*limit(int n)
{
	char	*result;

	if (n == -2147483648)
		result = ft_strdup("-2147483648");
	else if (n == 0)
		result = ft_strdup("0");
	else
		result = ft_strdup("");
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		bas;
	int		tmp;

	if (n == 0 || n == -2147483648)
		return (limit(n));
	bas = digit(n);
	result = (char *)malloc(bas + 1);
	if (!result)
		return (0);
	result[bas] = '\0';
	tmp = n;
	if (n < 0)
		n = -n;
	while (n)
	{
		result[--bas] = n % 10 + 48;
		n /= 10;
	}
	if (tmp < 0)
		result[0] = '-';
	return (result);
}
