/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:51:05 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 11:20:06 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	unsigned int	i;
// 	size_t			srclen;

// 	srclen = ft_strlen(src);
// 	if (srclen + 1 < dstsize)
// 	{
// 		i = 0;
// 		while (src[i] && i < dstsize + 1)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	else if (dstsize != 0)
// 	{
// 		i = 0;
// 		while (src[i] && i < dstsize - 1)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	return (srclen);
// }
//----------------------------------------------------
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize > srclen + 1)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}

// int	main(void)
// {
// 	char	dst[5];

// 	char src[10] = {'s', 'a', 'l', 'a', 'h', 'r', 'a', 'c', 'h', '\0'};
// 	ft_strlcpy(dst, src, 5);
// 	unsigned int i  = 0;
// 	while (i < ft_strlen(dst))
// 	{
// 		printf("%c",dst[i]);
// 		i++;
// 	}
// 	return (0);
// }
