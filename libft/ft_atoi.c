/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:15:31 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 20:43:50 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//just  normal atoi.
static int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - 48);
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
// 	printf("the result for --223  ,is : %d\n",
// ft_atoi("-145353336525333535252533536"));
// 	printf("__________________________________________________________\n");
// 	printf("the result for 123  ,is : %d\n",atoi("123"));
// 	printf("the result for 456   ,is : %d\n",atoi(" 456"));
// 	printf("the result for 789abc   ,is : %d\n",atoi("789abc"));
// 	printf("the result for 'empty string'  ,is : %d\n",atoi(""));
// 	printf("the result for -42  ,is : %d\n",atoi("-42"));
// 	printf("the result for 007  ,is : %d\n",atoi("007"));
// 	printf("the result for --223  ,is : %d\n",atoi("--223"));
// 	printf("the result for --223  ,is : %d\n",
// atoi("-145353336525333535252533536"));
// }