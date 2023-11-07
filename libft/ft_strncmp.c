/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:42:17 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/07 15:29:43 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((ss1[i] || ss2[i]) && i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{	
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("Hello", "Hello", 5));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("World", "World", 10));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("Apples", "Bananas", 3));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("Cat", "Caterpillar", 3));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("HELLO", "hello", 5));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("abc", "ABD", 2));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("String", "String\0More", 12));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("Test", "Text", 0));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("123", "1234", -2));
	printf("the comparaison reslt is : %d \n",
	ft_strncmp(NULL, "Text", 4));//undefined behavior
	printf("the comparaison reslt is : %d \n",
	ft_strncmp("Test", NULL, 4));//undefined behavior
}
*/ 

/*
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)ss1;
	s2 = (unsigned char *)ss2;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((s1[i] - s2[i]));
	}
	return (0);
*/