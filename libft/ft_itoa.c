/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:09:58 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:43:20 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_counter(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	int		i;
	int		save;

	length = int_counter(n);
	i = length;
	save = n;
	result = (char *)malloc((length + 1));
	if (!result)
		return (NULL);
	while (length > 0)
	{
		result[length - 1] = (ft_abs(n % 10)) + 48;
		n /= 10;
		length--;
	}
	if (length == 0 && save < 0)
		result[0] = 45;
	result[i] = '\0';
	return (result);
}
