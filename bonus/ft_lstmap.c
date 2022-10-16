/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:22:42 by oulusoy           #+#    #+#             */
/*   Updated: 2022/10/14 11:22:45 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*iter;

	root = NULL;
	while (lst)
	{
		iter = ft_lstnew(f(lst->content));
		if (!iter)
		{
			ft_lstclear(&root, del);
			return (0);
		}
		ft_lstadd_back(&root, iter);
		lst = lst->next;
	}
	return (root);
}
