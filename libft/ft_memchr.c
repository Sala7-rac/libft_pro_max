/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:29:32 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 15:33:57 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			i;

	uc = (unsigned char )c;
	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == uc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
