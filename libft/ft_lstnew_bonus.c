/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:56:30 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/15 21:36:11 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

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
