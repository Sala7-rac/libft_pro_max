/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:28:43 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 10:39:29 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// work with kda istead of b to preserve the first argument return value
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*kda;

	kda = (unsigned char *) b;
	while (len > 0)
	{
		*(kda++) = (unsigned char ) c;
		len--;
	}
	return (b);
}
// void	printArray(const void *array, size_t size, const char *message) {
//     if (message) {
//         printf("%s: ", message);
//     }

//     const unsigned char *bytes = (const unsigned char *)array;
//     for (size_t i = 0; i < size; i++) {
//         printf("%02X ", bytes[i]);
//     }

//     printf("\n");
// }

// int	main(void)
// {
// 	unsigned int flags[4];
// 	memset(flags, 0xFF, 4 * sizeof(unsigned int));

// 	printArray(values, sizeof(values), "Array of Integers");
// 	printf("______________________________________________\n");
// 	memset(values + 1, 0, 3 * sizeof(long long));
// 	printArray(values, sizeof(values), "Array of Integers");
// 	printf("______________________________________________\n");
// }
// int main(void)
// {
// 	int p = 42;
// 	ft_memset((char *)&p+0, 57, 1);
// 	ft_memset((char *)&p+1, 5, 1);
// 	printf("%d\n", p);

// }
