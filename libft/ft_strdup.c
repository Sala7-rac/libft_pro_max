/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:45:25 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/05 15:02:04 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

char	*ft_strdup(const char *s1)
{
	char	*tp;
	size_t	lenx;
	size_t	i;

	i = 0;
	lenx = ft_strlen(s1);
	tp = (char *) malloc(lenx + 1);
	if (!tp)
		return (NULL);
	while (s1[i])
	{
		*(tp + i) = *(s1 + i);
		i++;
	}
	tp[i] = '\0';
	return (tp);
}

// int main() {
//     // Test Scenario 1: Duplicating a String
//     const char *original1 = "Hello, World!";
//     char *duplicate1 = ft_strdup(original1);

//     if (duplicate1 != NULL) {
//         printf("Test 1 - Duplicating a String: 
//Duplicate string is %s\n", duplicate1); 
// Expected: "Duplicate string is Hello, World!"

//         // Free the duplicate string
//         free(duplicate1);
//     } else {
//         printf("Test 1 - Duplicating a String: Memory allocation failed\n");
//     }

//     // Test Scenario 2: Duplicating an Empty String
//     const char *original2 = "";
//     char *duplicate2 = ft_strdup(original2);

//     if (duplicate2 != NULL) {
//         printf("Test 2 - Duplicating an Empty String: 
//Duplicate string is %s\n", duplicate2); 
// Expected: "Duplicate string is "

//         // Free the duplicate string
//         free(duplicate2);
//     } else {
//         printf("Test 2 - Duplicating an Empty String: 
//Memory allocation failed\n");
//     }

//     // Test Scenario 3: Duplicating a Null String
//     const char *original3 = NULL;
//     char *duplicate3 = ft_strdup(original3);

//     if (duplicate3 != NULL) {
//         printf("Test 3 - Duplicating a Null String: 
//Duplicate string is %s\n", duplicate3); 
// Expected: "Duplicate string is (null)"

//         // Free the duplicate string
//         free(duplicate3);
//     } else {
//         printf("Test 3 - Duplicating a Null String: 
//Memory allocation failed\n");
//     }

//     return 0;
// }
