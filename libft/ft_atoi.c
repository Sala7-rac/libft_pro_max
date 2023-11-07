/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:15:31 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/07 18:32:34 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//just  normal atoi.

int	ft_isspace(char c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
// int	main(void)
// {
// 	printf("the result for ft_atoi : 123  ,is : %d\n",ft_atoi("123"));
// 	printf("the result for ft_atoi : 456   ,is : %d\n",ft_atoi(" 456"));
// 	printf("the result for ft_atoi : 789abc   ,is : %d\n",ft_atoi("789abc"));
// 	printf("the result for ft_atoi : 'empty string'  ,is : %d\n",ft_atoi(""));
// 	printf("the result for ft_atoi : -42  ,is : %d\n",ft_atoi("-42"));
// 	printf("the result for ft_atoi : 007  ,is : %d\n",ft_atoi("007"));
// 	printf("the result for ft_atoi : --223  ,is : %d\n",ft_atoi("--223"));
// 	printf("the result for ft_atoi : ft_atoi  ,is : 
//%d\n",ft_atoi("-1453533365253379154"));
// 	printf("__________________________________________________________\n");
// 	printf("the result for atoi  : 123  ,is : %d\n",atoi("123"));
// 	printf("the result for atoi  : 456   ,is : %d\n",atoi(" 456"));
// 	printf("the result for atoi  : 789abc   ,is : %d\n",atoi("789abc"));
// 	printf("the result for atoi  : 'empty string'  ,is : %d\n",atoi(""));
// 	printf("the result for atoi  : -42  ,is : %d\n",atoi("-42"));
// 	printf("the result for atoi  : 007  ,is : %d\n",atoi("007"));
// 	printf("the result for atoi  : --223  ,is : %d\n",atoi("--223"));
// 	printf("the result for atoi  : atoi  ,is
//: %d\n",atoi("-1453533365253379154"));
// }