/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:15:31 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/03 09:04:39 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	if (ft_isspace(*str))
		str++;
	if (*str == '+' && *(str + 1) != '-')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *str - 48;
		str++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("the result for 123  ,is : %d\n",ft_atoi("123"));
// 	printf("the result for 456   ,is : %d\n",ft_atoi(" 456"));
// 	printf("the result for 789abc   ,is : %d\n",ft_atoi("789abc"));
// 	printf("the result for 'empty string'  ,is : %d\n",ft_atoi(""));
// 	printf("the result for -42  ,is : %d\n",ft_atoi("-42"));
// 	printf("the result for 007  ,is : %d\n",ft_atoi("007"));
// 	printf("the result for --223  ,is : %d\n",ft_atoi("--223"));
// 	printf("__________________________________________________________\n");
// 	printf("the result for 123  ,is : %d\n",atoi("123"));
// 	printf("the result for 456   ,is : %d\n",atoi(" 456"));
// 	printf("the result for 789abc   ,is : %d\n",atoi("789abc"));
// 	printf("the result for 'empty string'  ,is : %d\n",atoi(""));
// 	printf("the result for -42  ,is : %d\n",atoi("-42"));
// 	printf("the result for 007  ,is : %d\n",atoi("007"));
// 	printf("the result for --223  ,is : %d\n",atoi("--223"));
// }