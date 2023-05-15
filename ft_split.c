/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:53:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/15 19:29:45 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_count_substr(char const *s, char c);
char	*ft_substr_position(char const *s, char c);
size_t	ft_alloc_substr(char **array, char const *str, char c);

char	**ft_split(char const *s, char c)
{
	size_t	sub_count;
	size_t	i;
	size_t	j;
	char	*ptr;
	char	**array;

	sub_count = ft_count_substr(s, c);
	array = malloc((sub_count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);	
	i = 0;
	j = 0;
	while (i < sub_count)
	{
		ptr = ft_substr_position(&s[j], c);
		j = j + (ft_alloc_substr(&array[i], ptr, c)) + 1;
		i++;
	}
	array[sub_count + 1] = NULL;
	return (array);
}

size_t	ft_count_substr(char const *s, char c)
{
	size_t	index;
	size_t	sub_count;

	index = 0;
	sub_count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] != c)
			sub_count++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (sub_count);
}

char	*ft_substr_position(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (&s[i]);
}

size_t	ft_substr_len(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++
	return(len);
}

size_t	ft_alloc_substr(char *array, char const *str, char c)
{
	size_t	substr_len;

	i = 0;
	substr_len = ft_substr_len(str, c);
	array = malloc((substr_size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	ft_strlcpy(array, str, substr_len + 1);
	return (substr_len);
}
