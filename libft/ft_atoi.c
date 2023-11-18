/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:15:31 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 17:49:27 by srachidi         ###   ########.fr       */
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
