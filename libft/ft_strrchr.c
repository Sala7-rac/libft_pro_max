/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:28 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 15:36:20 by srachidi         ###   ########.fr       */
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
