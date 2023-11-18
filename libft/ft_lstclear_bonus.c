/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:01:56 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/18 16:16:58 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur_node;
	t_list	*nx_node;

	cur_node = *lst;
	while (cur_node != NULL)
	{
		nx_node = cur_node->next;
		del(cur_node->content);
		free (cur_node);
		cur_node = nx_node;
	}
	*lst = NULL;
}
