/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:40:51 by srachidi          #+#    #+#             */
/*   Updated: 2023/10/31 20:58:07 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// int	main(void)
// {
// 	char	chars[] = {'d','g','\n','\t','%','4'};
// 	int i = 0;
// 	while (i < 6)
// 	{
// 		if(ft_isprint(chars[i]))
// 		{
// 			printf("the character %c is printable ! \n",chars[i]);
// 		}
// 		else
// 		{
// 			printf("the character %c is NOT printable ! \n",chars[i]);
// 		}
// 		i++;
// 	}
// }