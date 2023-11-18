/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:47:16 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 18:25:36 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstring;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	joinedstring = (char *)malloc(((lens1 + lens2) * sizeof(char)) + 1);
	if (!joinedstring)
		return (NULL);
	while (s1[i])
	{
		joinedstring[i] = s1[i];
		i++;
	}
	while (s2[j])
		joinedstring[i++] = s2[j++];
	joinedstring[i] = '\0';
	return (joinedstring);
}
