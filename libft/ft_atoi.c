/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:15:31 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/08 19:11:50 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overf_handler(int res, int kda, int sign)
{
	if (res / 10 > kda)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;
	int	kda;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		kda = res;
		res = (res * 10) + (str[i] - 48);
		if (overf_handler(res, kda, sign) != 1)
			return (overf_handler(res, kda, sign));
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {+
// 	printf("the result for ft_atoi : 123  ,is : %d\n",ft_atoi("123"));
// 	printf("the result for ft_atoi : 456   ,is : %d\n",ft_atoi(" 456"));
// 	printf("the result for ft_atoi : 789abc   ,is : %d\n",ft_atoi("789abc"));
// 	printf("the result for ft_atoi : 'empty string'  ,is : %d\n",ft_atoi(""));
// 	printf("the result for ft_atoi : -42  ,is : %d\n",ft_atoi("-42"));
// 	printf("the result for ft_atoi : 007  ,is : %d\n",ft_atoi("007"));
// 	printf("the result for ft_atoi : --223  ,is : %d\n",ft_atoi("--223"));
// 	printf("the result for ft_atoi : ft_atoi  ,is 
//: %d\n",ft_atoi("+00000000000000000000454"));
// 	printf("__________________________________________________________\n");
// 	printf("the result for atoi  : 123  ,is : %d\n",atoi("123"));
// 	printf("the result for atoi  : 456   ,is : %d\n",atoi(" 456"));
// 	printf("the result for atoi  : 789abc   ,is : %d\n",atoi("789abc"));
// 	printf("the result for atoi  : 'empty string'  ,is : %d\n",atoi(""));
// 	printf("the result for atoi  : -42  ,is : %d\n",atoi("-42"));
// 	printf("the result for atoi  : 007  ,is : %d\n",atoi("007"));
// 	printf("the result for atoi  : --223  ,is : %d\n",atoi("--223"));
// 	printf("the result for atoi  : atoi  ,is 
//: %d\n",atoi("+00000000000000000000454"));
// }

// int main()
// {
// 	printf("ft_atoi : %d\n",ft_atoi("12345000000075199000"));
// 	printf("atoi : %d\n",atoi("12345000000075199000"));
// }

// int main()
// {
// 	long a = 1000;
// 	printf("%lu\n",strlen((char *)&a));
// }
// 00000000 00000000 00000011 11101000
// 11101000 00000011 00000000 00000000
// 232 3
// è | End of Text(np-printable)| \0 (len = 2)