/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:33:09 by srachidi          #+#    #+#             */
/*   Updated: 2023/10/31 20:39:35 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char kda1 = 'e';
// 	char kda2 = 'j';
// 	char kda3 = '5';
// 	char kda4= '/';
// 	char kda5 = '*';
// 	char kda6 = '&';

// 	printf("the character %c, %d \n", kda1, ft_isascii(kda1));		
// 	printf("the character %c, %d \n", kda2, ft_isascii(kda2));
// 	printf("the character %c, %d \n", kda3, ft_isascii(kda3));
// 	printf("the character %c, %d \n", kda4, ft_isascii(kda4));
// 	printf("the character %c, %d \n", kda5, ft_isascii(kda5));
// 	printf("the character %c, %d \n", kda6, ft_isascii(kda6));
// }