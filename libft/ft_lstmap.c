/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:50:12 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:49:41 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*head;

	if (lst != NULL && f != NULL)
	{
		newlist = f(lst);
		head = newlist;
		while (lst->next)
		{
			newlist->next = f(lst->next);
			lst = lst->next;
			newlist = newlist->next;
		}
		if (lst->next == NULL)
		{
			free(newlist);
			newlist = NULL;
		}
		return (head);
	}
	return (NULL);
}
