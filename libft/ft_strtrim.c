/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:10 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:42:38 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_checker(const char *str, char to_find)
{
	while (*str)
	{
		if (*str == to_find)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimmed;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (set_checker(set, s1[i]) == 0)
			break ;
		i++;
	}
	while (j > 0)
	{
		if (set_checker(set, s1[j]) == 0)
			break ;
		j--;
	}
	trimmed = ft_substr(s1, i, (j - i) + 1);
	return (trimmed);
}
