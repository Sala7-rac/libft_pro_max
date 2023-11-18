/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:29:06 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/16 18:05:40 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *str, char c)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			counter++;
		while (*str && *str != c)
			str++;
	}
	return (counter);
}

static char	*reserve_and_copy(const char *str, char c)
{
	size_t		len;
	char		*single_word;
	const char	*init_add;

	init_add = str;
	len = 0;
	while (*str && *str == c)
		str++;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	single_word = (char *)malloc(len + 1);
	if (!single_word)
		return (NULL);
	ft_strlcpy(single_word, init_add, len + 1);
	single_word[len] = '\0';
	return (single_word);
}

static void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	int		wc;
	int		i;

	i = 0;
	wc = word_counter(s, c);
	output = (char **)malloc((wc + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	while (*s && i < wc)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			output[i] = reserve_and_copy(s, c);
			if (!output[i++])
				return (ft_free(output), NULL);
		}
		while (*s && *s != c)
			s++;
	}
	return (output[wc] = NULL, output);
}
