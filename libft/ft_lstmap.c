/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:34:47 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/13 18:07:51 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*out_list;
// 	t_list	*init;
// 	t_list	*cur_node;

// 	if (!lst)
// 		return (NULL);
// 	init = NULL;
// 	while (!lst)
// 	{
// 		out_list = malloc(sizeof(t_list));
// 		if (!out_list)
// 		{
// 			ft_lstclear(&init, del);
// 			return (NULL);
// 		}
// 		out_list->content = f(lst->content);
// 		if (!init)
// 			init = out_list;
// 		cur_node = lst;
// 		lst = lst->next;
// 		if (lst)
// 			out_list = malloc(sizeof(t_list));
// 		else
// 			out_list = NULL;
// 		del(cur_node->content);
// 		free(cur_node);
// 		out_list = out_list->next;
// 	}
// 	return (init);
// }
