/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:07:58 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 11:49:37 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	//return the original value of dst

// int	main(void)
// {
// 	int source[7] = {1, 2, 3, 4, 5, 6, 7};
// 	int destination[8];
// 	int	x = 8;
// 	int	i = 0;
// 	ft_memcpy(destination, source, 8 * sizeof(int));

// 	while (x > 0)
// 	{
// 		printf("%d ,",destination[i]);
// 		x--;
// 		i++;
// 	}
// }