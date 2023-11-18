/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:56:30 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:58:29 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*the_node;

	the_node = malloc(sizeof(t_list));
	if (!the_node)
		return (NULL);
	the_node->content = content;
	the_node->next = NULL;
	return (the_node);
}
