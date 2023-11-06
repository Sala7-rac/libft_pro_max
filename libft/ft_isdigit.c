/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:44:55 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 10:32:35 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

// int	main(void)
// {
// 	int kda = 4;
// 	char kd = 'D';
// 	printf("result : %d\n", ft_isdigit(kda));
// 	printf("result : %d", ft_isdigit(kd));
// }