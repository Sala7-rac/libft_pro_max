/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:29:06 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/11 16:27:18 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	w_c;

	w_c = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			w_c++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (w_c);
}

static char	*res_word(const char *str, char sep)
{
	int		i;
	int		count;
	char	*word;

	i = 0;
	count = 0;
	while (str[i] == sep && str[i])
		i++;
	while (str[i] != sep && str[i])
	{
		count++;
		i++;
	}
	word = (char *)malloc(count + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, count + 1);
	word[count] = '\0';
	return (word);
}

static	void	ft_free(char **pt)
{
	int	i;

	i = 0;
	while (pt[i])
	{
		free(pt[i]);
		i++;
	}
	free(pt);
	return ;
}

char	**ft_split(const char *s, char c)
{
	char	**dyno;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	dyno = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!dyno)
		return (NULL);
	while (s[j] && i != word_count(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j] && s[j] != c)
		{
			dyno[i++] = res_word(&s[j], c);
			if (!dyno)
				return (ft_free(dyno), NULL);
		}
		while (s[j] != c && s[j])
			j++;
	}
	return (dyno[i] = NULL, dyno);
}
