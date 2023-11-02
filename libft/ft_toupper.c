/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:20:33 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/01 10:34:38 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char k1 = 'a';
// 	char k2 = 'z';
// 	char k3 = 'r';
// 	char k4 = '&';

// 	printf("the test result for %c : %c \n",k1, ft_toupper(k1));
// 	printf("the test result for %c : %c \n",k2, ft_toupper(k2));
// 	printf("the test result for %c : %c \n",k3, ft_toupper(k3));
// 	printf("the test result for %c : %c \n",k4, ft_toupper(k4));
// }