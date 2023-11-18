/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:45:25 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 16:40:59 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
