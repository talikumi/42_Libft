/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:50:27 by ntozzi            #+#    #+#             */
/*   Updated: 2023/01/27 15:16:34 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*curr;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	curr = lst;
	while (curr)
	{
		tmp = ft_lstnew(f(curr->content));
		if (!tmp)
		{
			if (del)
				ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, tmp);
		curr = curr->next;
	}
	return (new_list);
}
