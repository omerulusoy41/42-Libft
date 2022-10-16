/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:06:47 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/13 11:24:16 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "../include/libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
/*int main()
{
	printf("%d",ft_isdigit('1'));
}*/
