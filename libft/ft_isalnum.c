/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:56:20 by srachidi          #+#    #+#             */
/*   Updated: 2023/10/31 15:14:29 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || 
		(c >= 0 && c <= 9));
}

// int	main(void)
// {
// 	int		kda1	= 9;
// 	char 	kda2	= 'd';
// 	int 	kda3	= 0;
// 	char 	kda4	= 'a';
// 	char 	kda5	= 'Z';
// 	char 	kda6	= 'z';
// 	char 	kda7	= 'A';
// 	char 	kda8	= '%';
// 	char 	kda9	= '*';
// 	char 	kda10	= '=';

// 	printf("result test for kda1 : %d \n", ft_isalnum(kda1));
// 	printf("result test for kda2 : %d \n", ft_isalnum(kda2));
// 	printf("result test for kda3 : %d \n", ft_isalnum(kda3));
// 	printf("result test for kda4 : %d \n", ft_isalnum(kda4));
// 	printf("result test for kda5 : %d \n", ft_isalnum(kda5));
// 	printf("result test for kda6 : %d \n", ft_isalnum(kda6));
// 	printf("result test for kda7: %d \n", ft_isalnum(kda7));
// 	printf("result test for kda8: %d \n", ft_isalnum(kda8));
// 	printf("result test for kda9: %d \n", ft_isalnum(kda9));
// 	printf("result test for kda10: %d \n", ft_isalnum(kda10));
// }
