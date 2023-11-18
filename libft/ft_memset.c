/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:28:43 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:43:52 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*kda;

	kda = (unsigned char *) b;
	while (len > 0)
	{
		*(kda++) = (unsigned char ) c;
		len--;
	}
	return (b);
}
