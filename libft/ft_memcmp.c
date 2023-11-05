/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:07:06 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/05 12:27:23 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}

// int main() {
//     // Test Scenario 1: Equal Memory Blocks
//     const char data1[] = "Hello, World!";
//     const char data2[] = "Hello, World!";
//     size_t dataSize1 = strlen(data1);
//     //size_t dataSize2 = strlen(data2);
//     int result1 = memcmp(data1, data2, dataSize1);
//     printf("Test 1 - Equal Blocks: Result is %d\n", result1); 
// 	// Expected: "Result is 0" (Equal)

//     // Test Scenario 2: Different Memory Blocks
//     const char data3[] = "Hello, World!";
//     const char data4[] = "Hola, Mundo!";
//     size_t dataSize3 = strlen(data3);
//     //size_t dataSize4 = strlen(data4);
//     int result2 = memcmp(data3, data4, dataSize3);
//     printf("Test 2 - Different Blocks: Result is %d\n", result2); 
// 	// Expected: "Result is -10" (Different)

//     // Test Scenario 3: Partially Different Memory Blocks
//     const char data5[] = "Hello, World!";
//     const char data6[] = "Hello, Universe!";
//     size_t dataSize5 = strlen(data5);
//     //size_t dataSize6 = strlen(data6);
//     int result3 = memcmp(data5, data6, dataSize5);
//     printf("Test 3 - Partially Different: Result is %d\n", result3); 
// 	// Expected: "Result is 2" (Different)

//     // Test Scenario 4: Equal Memory Blocks (Custom Size)
//     const int numbers1[] = {1, 2, 3, 4, 5};
//     const int numbers2[] = {1, 2, 3, 4, 5};
//     size_t dataSize7 = sizeof(numbers1);
//     int result4 = memcmp(numbers1, numbers2, dataSize7);
//     printf("Test 4 - Equal Blocks (Custom Size): Result is %d\n", result4); 
// 	// Expected: "Result is 0" (Equal)

//     return 0;
// }
