/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:58:33 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/11 23:17:52 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
size_t	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}

// int	main(void)
// {
// 	char kda[] = "skalapox";
// 	printf("the size of kda is :  %zu", ft_strlen(kda));
// }

// int	main(void)
// {
// 	int kda = 0x100000001; // 

// 	char c= 0b10000000;
// 	printf("%d %d %zu\n",kda, c, ft_strlen((char *)&kda));
// }