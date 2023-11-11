#include "libft.h"
#include <malloc/malloc.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// static int	word_count(char const *str, char sep)
// {
// 	int count;

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

// static char *rescopy(const char *str, char sep)
// {
// 	int		i;
// 	size_t	len;
// 	char 	*reserved_location;
	
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

// char **ft_split(char const *s, char c)
// {
// 	char **final_res;
// 	int	j;
// 	int wc;

// 	wc = word_count(s, c);
// 	j = 0;
// 	final_res = (char **)malloc((wc + 1) * sizeof(char *));
// 	if (!final_res)
// 		return (NULL);
// 	while (*s && j != wc)
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		if (*s)
// 		{
// 			final_res[j] = rescopy(s, c);
// 			if (!final_res[j++])
// 				return (ft_free(final_res), NULL);
// 		}
// 		while (*s && *s != c)
// 			s++;
// 	}
// 	return (final_res[j] = NULL, final_res);
// }
// int	main(void)
// {
// 	// char *test = "salah***kamal***sal3os";
// 	char **res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	for (int i = 0; res[i]; i++)
// 		printf("\t >>> %s \n",res[i]);
// }