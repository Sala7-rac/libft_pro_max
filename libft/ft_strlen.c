/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:58:33 by srachidi          #+#    #+#             */
/*   Updated: 2023/10/31 21:19:07 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
size_t	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}

// int	main(void)
// {
// 	char kda[] = "skalapox";
// 	printf("the size of kda is :  %zu", ft_strlen(kda));
// }