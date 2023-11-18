/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:52:24 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 15:29:46 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	i = -1;
	pdst = (char *)dst;
	psrc = (char *)src;
	if (dst == (void *)0 && src == (void *)0)
		return (NULL);
	if (pdst > psrc)
	{
		while (len > 0)
		{
			pdst[len - 1] = psrc[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < len)
			pdst[i] = psrc[i];
	}
	return (dst);
}
