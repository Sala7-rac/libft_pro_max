/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:26:46 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/05 14:44:49 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tp;
	size_t			i;

	i = 0;
	tp = malloc(count * size);
	if (!tp)
		return (NULL);
	while (i < count * size)
		tp[i++] = 0;
	return (tp);
}

// int main() {
//     // Test Scenario 1: Allocating Memory for Integers
//     size_t num_elements1 = 5;
//     size_t element_size1 = sizeof(int);
//     int *array1 = (int *)ft_calloc(num_elements1, element_size1);

//     if (array1 != NULL) {
//         printf("Test 1 - Allocating Memory for Integers: 
//Memory allocation successful\n");

//         // Initialize the allocated memory with values
//         for (size_t i = 0; i < num_elements1; i++) {
//             array1[i] = i * 10;
//         }

//         // Display the values in the allocated memory
//         printf("Test 1 - Values in Allocated Memory: ");
//         for (size_t i = 0; i < num_elements1; i++) {
//             printf("%d ", array1[i]);
//         }
//         printf("\n");

//         // Free the allocated memory
//         free(array1);
//     } else {
//         printf("Test 1 - Allocating Memory for Integers: 
//Memory allocation failed\n");
//     }

//     // Test Scenario 2: Allocating Memory for Doubles
//     size_t num_elements2 = 3;
//     size_t element_size2 = sizeof(double);
//     double *array2 = (double *)ft_calloc(num_elements2, element_size2);

//     if (array2 != NULL) {
//         printf("Test 2 - Allocating Memory for Doubles: 
//Memory allocation successful\n");

//         // Initialize the allocated memory with values
//         for (size_t i = 0; i < num_elements2; i++) {
//             array2[i] = 1.1 * (i + 1);
//         }

//         // Display the values in the allocated memory
//         printf("Test 2 - Values in Allocated Memory: ");
//         for (size_t i = 0; i < num_elements2; i++) {
//             printf("%.2f ", array2[i]);
//         }
//         printf("\n");

//         // Free the allocated memory
//         free(array2);
//     } else {
//         printf("Test 2 - Allocating Memory for Doubles: 
//Memory allocation failed\n");
//     }

//     // Test Scenario 3: Allocating Memory for Characters
//     size_t num_elements3 = 7;
//     size_t element_size3 = sizeof(char);
//     char *array3 = (char *)ft_calloc(num_elements3, element_size3);

//     if (array3 != NULL) {
//         printf("Test 3 - Allocating Memory for Characters: 
//Memory allocation successful\n");

//         // Initialize the allocated memory with values
//         for (size_t i = 0; i < num_elements3; i++) {
//             array3[i] = 'A' + i;
//         }

//         // Display the values in the allocated memory
//         printf("Test 3 - Values in Allocated Memory: ");
//         for (size_t i = 0; i < num_elements3; i++) {
//             printf("%c ", array3[i]);
//         }
//         printf("\n");

//         // Free the allocated memory
//         free(array3);
//     } else {
//         printf("Test 3 - Allocating Memory for Characters: 
//Memory allocation failed\n");
//     }

//     return 0;
// }
