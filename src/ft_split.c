/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:02:37 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/17 16:27:49 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	count_words(char const *str, char chr)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != chr)
		{
			count++;
			while (*str != chr && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static char	count_chars(char const *str, char chr)
{
	size_t	count;

	count = 0;
	while (*str != chr && *str)
	{
		count++;
		str++;
	}
	return (count);
}

static void	copy_words(char **split, char const *str, char chr)
{
	size_t	len_words;

	while (*str)
	{
		while (*str && *str == chr)
		{
			str++;
		}
		if (*str)
		{
			len_words = count_chars(str, chr);
			*split++ = ft_substr(str, 0, len_words);
			str += len_words;
		}
	}
	*split = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	copy_words(str, s, c);
	return (str);
}

// int main(void)
// {
// 	char const *str = NULL;
// 	char **split = ft_split(str, ' ');

// 	if (split == NULL)
// 	{
// 		printf("No words found\n");
// 		return (0);
// 	}
// 	else if (!split)
// 	{
// 		printf("Error on string division \n");
// 		return (1);
// 	}
// 	printf("Words:\n");
// 	while (*split)
// 	{
// 		printf("%s\n", *split);
// 		split++;
// 	}
// 	free(split);
// 	return (0);
// }
