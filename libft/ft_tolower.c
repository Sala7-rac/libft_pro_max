/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:36:53 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/11 08:10:31 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	return (c += (c >= 'A' && c <= 'Z') * 32);
}

// int	main(void)
// {
// 	int	i = 0;
// 	char test[] = "SALAH";//data structre
// 	//char *test = "SALAH";//data type
// 	while (test[i])
// 	{
// 		test[i] = ft_tolower(test[i]);
// 		i++;
// 	}
// 	printf("%s",test);
// }
