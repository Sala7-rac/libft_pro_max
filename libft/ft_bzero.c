/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:49:13 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/03 12:07:13 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*kda;

	kda = (char *) s;
	while (n > 0)
	{
		*(kda++) = 0;
		n--;
	}
}

// int	main(void)
// {
// 	// int numbers[5] = {1, 2, 3, 4, 5};
// 	// size_t	len = sizeof(numbers);
// 	// int	i = 0;
// 	// ft_bzero(numbers, 5 * sizeof(int));

// 	// while (len > 0)
// 	// {
// 	// 	printf("%d ,",numbers[i]);
// 	// 	i++;
// 	// 	len--;
// 	// }
// 	printf("\n");
// 	printf("__________________________________________________\n");
// 	int fnumbers[5] = {1, 2, 3, 4, 5};
// 	size_t	flen = sizeof(fnumbers);
// 	int	j = 0;
// 	bzero(fnumbers, 5 * sizeof(int));
// 	while (flen > 0)
// 	{
// 		printf("%d ,",fnumbers[j]);
// 		j++;
// 		flen--;
// 	}
// }