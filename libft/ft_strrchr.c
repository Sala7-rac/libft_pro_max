/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:28 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/06 12:42:43 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	to_find;
	char	*result;

	to_find = (char)c;
	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == to_find)
			result = (char *) &s[i];
		i++;
	}
	if (s[i] == to_find)
		result = (char *)&s[i];
	return (result);
}

// int main() {
//     // Test Scenario 1: Character Found in String
//     const char *string1 = "Hello, World!";
//     char charToFind1 = 'o';
//     char *result1 = strrchr(string1, charToFind1);
//     printf("Test 1 - Character Found: %s\n", result1); 
// Expected: "orld!"

//     // Test Scenario 2: Character Not Found in String
//     const char *string2 = "Hello, World!";
//     char charToFind2 = 'Z';
//     char *result2 = strrchr(string2, charToFind2);
//     printf("Test 2 - Character Not Found: %p\n", (void *)result2); 
// Expected: NULL

//     // Test Scenario 3: Finding Null Terminator
//     const char *string3 = "Hello, World!";
//     char charToFind3 = '\0';
//     char *result3 = strrchr(string3, charToFind3);
//     printf("Test 3 - Finding Null Terminator: %s\n", result3); 
// Expected: "\0"

//     // Test Scenario 4: Character at the Beginning of String
//     const char *string4 = "Hello, World!";
//     char charToFind4 = 'H';
//     char *result4 = strrchr(string4, charToFind4);
//     printf("Test 4 - Character at Beginning: %s\n", result4);
// Expected: "Hello, World!"

//     // Test Scenario 5: Character at the End of String
//     const char *string5 = "Hello, World!";
//     char charToFind5 = 'd';
//     char *result5 = strrchr(string5, charToFind5);
//     printf("Test 5 - Character at End: %s\n", result5); 
// Expected: "d"

//     // Test Scenario 6: Empty String
//     const char *string6 = "";
//     char charToFind6 = 'A';
//     char *result6 = strrchr(string6, charToFind6);
//     printf("Test 6 - Empty String: %p\n", (void *)result6); 
// Expected: NULL

//     return 0;
// }
