/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:24:29 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 10:39:38 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	to_find = (char )c;
	while (*s)
	{
		if (*s == to_find)
			return ((char *)s);
		s++;
	}
	if (to_find == '\0')
		return ((char *)s);
	return ((void *)0); 
}

// int main() {
//     // Test Scenario 1: Character Found in String
//     const char *string1 = "Hello, World!";
//     char charToFind1 = 'W';
//     char *result1 = ft_strchr(string1, charToFind1);
//     printf("Test 1 - Character Found: %s\n", result1); // Expected: "World!"

//     // Test Scenario 2: Character Not Found in String
//     const char *string2 = "Hello, World!";
//     char charToFind2 = 'Z';
//     char *result2 = ft_strchr(string2, charToFind2);
//     printf("Test 2 - Character Not Found: %p\n", (void *)result2); 
// Expected: NULL

//     // Test Scenario 3: Finding Null Terminator
//     const char *string3 = "Hello, World!";
//     char charToFind3 = '\0';
//     char *result3 = ft_strchr(string3, charToFind3);
//     printf("Test 3 - Finding Null Terminator: %s\n", result3); 
// Expected: "\0"

//     // Test Scenario 4: Character at the Beginning of String
//     const char *string4 = "Hello, World!";
//     char charToFind4 = 'H';
//     char *result4 = ft_strchr(string4, charToFind4);
//     printf("Test 4 - Character at Beginning: %s\n", result4); 
// Expected: "Hello, World!"

//     // Test Scenario 5: Character at the End of String
//     const char *string5 = "Hello, World!";
//     char charToFind5 = 'd';
//     char *result5 = ft_strchr(string5, charToFind5);
//     printf("Test 5 - Character at End: %s\n", result5); 
// Expected: "d, World!"

//     // Test Scenario 6: Empty String
//     const char *string6 = "";
//     char charToFind6 = 'A';
//     char *result6 = ft_strchr(string6, charToFind6);
//     printf("Test 6 - Empty String: %p\n", (void *)result6); 
// Expected: NULL

//     return 0;
// }
