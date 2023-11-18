/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:07:58 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:43:39 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tdst = (unsigned char *) dst;
	tsrc = (unsigned char *) src;
	while (n > 0)
	{
		*(tdst++) = *(tsrc++);
		n--;
	}
	return (dst);
}
