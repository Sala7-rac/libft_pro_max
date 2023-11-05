/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:52:24 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/04 15:23:28 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*tdst;
	char			*tsrc;
	unsigned int	i;

	if (dst == (void *)0 && src == (void *)0)
		return (NULL);
	tdst = (char *) dst;
	tsrc = (char *) src;
	i = 0;
	if (tdst > tsrc && tdst < tsrc + len)
	{
		while (len-- > 0)
			tdst[len - 1] = tsrc[len - 1];
	}
	else
	{
		while (i++ < len)
			tdst[i] = tsrc[i];
	}
	return (dst);
}
// /returns the original value of dst

// int	main(void)
// {
//     char source1[] = "World!dsc";
//     char destination1[20] = "Hello, ";

//     // Print the initial state
//     printf("Source: \"%s\"\n", source1);
//     printf("Initial Destination: \"%s\"\n", destination1);

//     // Perform the memmove
//     //  ft_memmove(destination1, source1, strlen(source1));
//     ft_memmove(destination1, source1, strlen(source1));

//     // Print the result
//     printf("Final Destination: \"%s\"\n", destination1);
// 	printf("___________________________________________________________\n");
//     char source2[] = "World!dsc";
//     char destination2[20] = "Hello, ";

//     // Print the initial state
//     printf("O-Source: \"%s\"\n", source2);
//     printf("O-Initial Destination: \"%s\"\n", destination2);

//     // Perform the memmove
//     //  ft_memmove(destination2, source2, strlen(source2));
//     memmove(destination2, source2, strlen(source2));

//     // Print the result
//     printf("O-Final Destination: \"%s\"\n", destination2);

//     return 0;
// }
