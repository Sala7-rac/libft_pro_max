/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:28:02 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/05 14:24:38 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) &haystack[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}

// int	main() {
//     // Test Scenario 1: Substring Found within the Limit
//     const char *haystack1 = "Hello, World!";
//     const char *needle1 = "World";
//     size_t len1 = strlen(haystack1);
//     char *result1 = ft_strnstr(haystack1, needle1, len1);
//     printf("Test 1 - Substring Found: Result is %s\n", result1); 
// 	// Expected: "Result is World!"

//     // Test Scenario 2: Substring Not Found within the Limit
//     const char *haystack2 = "Hello, Universe!";
//     const char *needle2 = "World";
//     size_t len2 = 10; // Limit the search to the first 10 characters
//     char *result2 = ft_strnstr(haystack2, needle2, len2);
//     if (result2 == NULL) {
//         printf("Test 2 - Substring Not Found: 
// 		Substring not found within the limit\n");
//     } else {
//         printf("Test 2 - Substring Not Found: Result is %s\n", result2);
//     }

//     return 0;
// }
