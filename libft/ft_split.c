/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachidi <srachidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:29:06 by srachidi          #+#    #+#             */
/*   Updated: 2023/11/11 23:17:17 by srachidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <cinttypes>
#include <malloc/malloc.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// static int	word_count(const char *s, char c)
// {
// 	int	i;
// 	int	w_c;

// 	w_c = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i] != c && s[i])
// 			w_c++;
// 		while (s[i] && s[i] != c)
// 			i++;
// 	}
// 	return (w_c);
// }

// static char	*res_word(const char *str, char sep)
// {
// 	int		i;
// 	int		count;
// 	char	*word;

// 	i = 0;
// 	count = 0;
// 	while (str[i] == sep && str[i])
// 		i++;
// 	while (str[i] != sep && str[i])
// 	{
// 		count++;
// 		i++;
// 	}
// 	word = (char *)malloc(count + 1);
// 	if (!word)
// 		return (NULL);
// 	ft_strlcpy(word, str, count + 1);
// 	word[count] = '\0';
// 	return (word);
// }

// static	void	ft_free(char **pt)
// {
// 	int	i;

// 	i = 0;
// 	while (pt[i])
// 	{
// 		free(pt[i]);
// 		i++;
// 	}
// 	free(pt);
// 	return ;
// }

// char	**ft_split(const char *s, char c)
// {
// 	char	**dyno;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	dyno = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
// 	if (!dyno)
// 		return (NULL);
// 	while (s[j] && i != word_count(s, c))
// 	{
// 		while (s[j] && s[j] == c)
// 			j++;
// 		if (s[j] && s[j] != c)
// 		{
// 			dyno[i++] = res_word(&s[j], c);
// 			if (!dyno)
// 				return (ft_free(dyno), NULL);
// 		}
// 		while (s[j] != c && s[j])
// 			j++;
// 	}
// 	return (dyno[i] = NULL, dyno);
// }

// static int	word_count(char const *str, char sep)
// {
// 	int	count;

// 	count = 0;
// 	if (!str)
// 		return (0);
// 	while (*str)
// 	{
// 		while (*str && *str == sep)
// 			str++;
// 		if (*str && *str != sep)
// 			count++;
// 		while (*str && *str != sep)
// 			str++;
// 	}
// 	return (count);
// }

// static char	*rescopy(const char *str, char sep)
// {
// 	int		i;
// 	size_t	len;
// 	char	*reserved_location;

// 	i = 0;
// 	len = 0;
// 	while (str[i] && str[i] == sep)
// 		i++;
// 	while (str[i] && str[i] != sep)
// 	{
// 		len++;
// 		i++;
// 	}
// 	reserved_location = (char *)malloc(len + 1);
// 	if (!reserved_location)
// 		return (NULL);
// 	ft_strlcpy(reserved_location, str, len + 1);
// 	reserved_location[len] = '\0';
// 	return (reserved_location);
// }

// static	void	ft_free(char **pt)
// {
// 	int	i;

// 	i = 0;
// 	while (pt[i])
// 	{
// 		free(pt[i]);
// 		i++;
// 	}
// 	free(pt);
// 	return ;
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**final_res;
// 	int		j;

// 	j = 0;
// 	final_res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
// 	if (!final_res)
// 		return (NULL);
// 	while (*s && j != word_count(s, c))
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		while (*s && *s != c)
// 		{
// 			final_res[j++] = rescopy(&*s, c);
// 			break ;
// 			if (!final_res)
// 				return (ft_free(final_res), NULL);
// 			s++;
// 		}
// 		while (*s && *s != c)
// 			s++;
// 	}
// 	return (final_res[j] = NULL, final_res);
// }

static int	word_count(char const *str, char sep)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str && *str != sep)
			count++;
		while (*str && *str != sep)
			str++;
	}
	return (count);
}

static char	*rescopy(const char *str, char sep)
{
	int		i;
	size_t	len;
	char	*reserved_location;

	i = 0;
	len = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i] && str[i] != sep)
	{
		len++;
		i++;
	}
	reserved_location = (char *)malloc(len + 1);
	if (!reserved_location)
		return (NULL);
	ft_strlcpy(reserved_location, str, len + 1);
	reserved_location[len] = '\0';
	return (reserved_location);
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

char	**ft_split(char const *s, char c)
{
	char	**final_res;
	int		j;
	int		wc;

	wc = word_count(s, c);
	j = 0;
	final_res = (char **)malloc((wc + 1) * sizeof(char *));
	if (!final_res)
		return (NULL);
	while (*s && j != wc)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			final_res[j] = rescopy(s, c);
			if (!final_res[j++])
				return (ft_free(final_res), NULL);
		}
		while (*s && *s != c)
			s++;
	}
	return (final_res[j] = NULL, final_res);
}

// struct s{
// 	void *p;
// 	int a;
// 	int b;
// };

// int main(void)
// {
// 	struct s a;

// 	void *p = &a;
// 	printf("%d", sizeof(struct s));
// }