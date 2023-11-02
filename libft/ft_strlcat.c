/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:33:04 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/02 09:05:07 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	len(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	int	srclen;
	int	dstlen;
	int	i;
	int	j;

	i = 0;
	j = 0;
	srclen = len(src);
	dstlen = len(dst);
	if (srclen == dstlen)
		return (srclen + dstlen);
	else if (dstsize > dstlen + srclen)
	{
		while (dst[i])
			i++;
		while (src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	else
	{
		while (src[j] && j < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	return (srclen + dstlen);
}

int	main(void)
{
	char src[5] = {'r','a','c','h','i'};
	char dst[10] = {'s','a','l','a','h'};

	ft_strlcat(dst, src, 10);
	
	unsigned int i  = 0;
	while (i < len(dst))
	{
		printf("%c",dst[i]);
		i++;
	}
}