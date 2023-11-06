/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:38:47 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 20:56:30 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			srclen;
	size_t			dstlen;
	unsigned int	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize || dstsize == 0)
		return (srclen + dstsize);
	while (src[i] && (i + dstlen) < dstsize - 1)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	srclen;
// 	size_t	dstlen;

// 	srclen = ft_strlen(src);
// 	dstlen = ft_strlen(dst);
// 	if (dstsize <= dstlen || dstsize == 0)
// 		return (srclen + dstlen);
// 	if (dstlen + srclen < dstsize - 1)
// 		ft_memcpy(dst + dstlen, src, srclen + 1);
// 	else
// 	{
// 		ft_memcpy(dst + dstlen, src, dstsize - srclen - 1);
// 		dst[dstsize - 1] = '\0';
// 	}
// 	return (srclen + dstlen);
// }

// int	main(void)
// {
// 	size_t	res;
// 	char src[] = "ndrix";
// 	char dst[10] = "skafanadri";
// 	res = strlcat(dst, src, sizeof(dst));
// 	printf("strlcat result string : %s \n", dst);
// 	printf("strlcat returned value : %zu\n", res);
// 	printf("------------------------------------\n");
// 	size_t	fres;

// 	char fsrc[] = "ndrix";
// 	char *fdst = "skafanadri";
// 	fres = ft_strlcat(fdst, fsrc, 10);
// 	printf("ft_strlcat result string : %s \n", fdst);
// 	printf("ft_strlcat returned value : %zu\n", fres);
// }