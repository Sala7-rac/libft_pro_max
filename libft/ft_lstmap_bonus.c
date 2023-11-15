/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:34:47 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/15 21:36:01 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*old;
	t_list	*new;
	void	*new_content;

	head = NULL;
	new = NULL;
	old = lst;
	while (old)
	{
		new_content = (*f)(old->content);
		new = ft_lstnew(new_content);
		if (new == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		old = old->next;
	}
	return (head);
}
