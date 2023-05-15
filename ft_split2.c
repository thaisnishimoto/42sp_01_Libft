/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:53:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/15 17:16:28 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_alloc_substr(char **array, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	sub_count;
	char	**array;

	index = 0;
	sub_count = 0;
	while (s[index])
	{
		if (s[index] == c)
			sub_count++;
		index++;
	}
	sub_count++;
	array = malloc((sub_count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	ft_alloc_substr(array, s, c);
	return (array);
}

char	**ft_alloc_substr(char **array, char const *s, char c)
{
	size_t	i;
	size_t	index;
	size_t	substr_size;

	i = 0;
	index = 0;
	substr_size = 0;
	while (index < ft_strlen(s))
	{
		substr_size = 0;
		while (s[index] != c)
		{
			index++;
			substr_size++;
		}
		array[i] = malloc((substr_size + 1) * sizeof(char));
		if (array[i] == NULL)
			return (NULL);
		ft_strlcpy(array[i], &s[index - substr_size], substr_size + 1);
		index++;
	i++;
	}
	array[i] = NULL;
	return (array);
}
