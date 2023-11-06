/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:36:53 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 12:42:48 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// int	main(void)
// {
// 	char kda[7] = {'S','a','L','a','c','O','X'};
// 	int i = 0;
// 	while (i < 7)
// 	{
// 		printf("Result : %c \n",ft_tolower(kda[i]));
// 		i++;
// 	}
// }
