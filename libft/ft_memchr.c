/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:29:32 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/05 12:06:02 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			i;

	uc = (unsigned char )c;
	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == uc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main() {
//     // Test Scenario 1: Byte Found in Memory
//     const char *data1 = "Hello, World!";
//     char byteToFind1 = 'o';
//     size_t dataSize1 = strlen(data1);
//     void *result1 = ft_memchr(data1, byteToFind1, dataSize1);
//     if (result1 != NULL) {
//         size_t index1 = (char *)result1 - data1;
//         printf("Test 1 - Byte Found: Found at index %zu\n", index1); 
//         // Expected: "Found at index 4"
//     } else {
//         printf("Test 1 - Byte Found: Byte not found\n");
//     }

//     // Test Scenario 2: Byte Not Found in Memory
//     const char *data2 = "Hello, World!";
//     char byteToFind2 = 'Z';
//     size_t dataSize2 = strlen(data2);
//     void *result2 = ft_memchr(data2, byteToFind2, dataSize2);
//     if (result2 != NULL) {
//         size_t index2 = (char *)result2 - data2;
//         printf("Test 2 - Byte Not Found: Found at index %zu\n", index2); 
//         // Expected: "Byte not found"
//     } else {
//         printf("Test 2 - Byte Not Found: Byte not found\n");
//     }

//     // Test Scenario 3: Byte Found at the Beginning
//     const char *data3 = "Hello, World!";
//     char byteToFind3 = 'H';
//     size_t dataSize3 = strlen(data3);
//     void *result3 = ft_memchr(data3, byteToFind3, dataSize3);
//     if (result3 != NULL) {
//         size_t index3 = (char *)result3 - data3;
//         printf("Test 3 - Byte Found at Beginning: 
//Found at index %zu\n", index3); 
//         // Expected: "Found at index 0"
//     } else {
//         printf("Test 3 - Byte Found at Beginning: Byte not found\n");
//     }

//     // Test Scenario 4: Byte Found at the End
//     const char *data4 = "Hello, World!";
//     char byteToFind4 = '!';
//     size_t dataSize4 = strlen(data4);
//     void *result4 = ft_memchr(data4, byteToFind4, dataSize4);
//     if (result4 != NULL) {
//         size_t index4 = (char *)result4 - data4;
//         printf("Test 4 - Byte Found at End: Found at index %zu\n", index4);
//         // Expected: "Found at index 12"
//     } else {
//         printf("Test 4 - Byte Found at End: Byte not found\n");
//     }

//     return 0;
// }
