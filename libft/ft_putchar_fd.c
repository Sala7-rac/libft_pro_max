/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:32:41 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/14 18:27:35 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main ()
// {
// 	// close (1);
// 	int fd1 = open ("test1.txt", O_CREAT | O_WRONLY, 0777);

// 	// int fd2 = open ("test2.txt", O_CREAT | O_WRONLY, 0777);
// 	// int fd3 = open ("test3.txt", O_CREAT | O_WRONLY, 0777);

// 	printf("%d\n", fd1);
// 	// ft_putchar_fd('a', fd);
// }
/*
stdin:  0
stdout: 1
stderr: 2
fd1   : 3
close (3)
fd2   : 3
fd3   : 4
*/