/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:53:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/16 16:06:12 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char const *s, char c);
size_t	ft_word_len(char const *str, char c);
void	strlcpy(char *dest, char const *src, size_t size);

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		word_len;
	char		**array;

	array = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		word_len = ft_word_len(&s[i], c);
		array[j] = malloc((word_len + 1) * sizeof(char));
		if (array[j] == NULL)
			return (NULL);
		strlcpy(array[j], &s[i], word_len + 1);
		i = i + word_len;
		j++;
	}
	array[j] = NULL;
	return (array);
}

size_t	ft_count_word(char const *s, char c)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] && s[index] != c)
			count++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (count);
}

size_t	ft_word_len(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

void	strlcpy(char *dest, char const *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
