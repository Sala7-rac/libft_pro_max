/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:26:46 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 18:23:14 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*kda;

	if ((int)count < 0 || (int)(size) < 0)
		return (NULL);
	kda = malloc(count * size);
	if (!kda)
		return (NULL);
	ft_bzero(kda, (count * size));
	return (kda);
}
