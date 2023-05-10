/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:56:36 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 01:18:02 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_trim_end(char *ptr, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	size_t	j;
	char	*ptr;

	ptr = malloc(strlen(s1) * 1);
	//if ptr == NULL
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (j < strlen(set))
		{
			if (s1[i] != set[j])
				j++;
			else
				break
		}
		if (s1[i] != set[j])
		{
			while (s1[i])
				*ptr++ = s1[i++];
		}
		i++;
	}
	printf("%s\n", &ptr[0]);
	ft_trim_end(&ptr[0], set);
	return (&ptr[0]);
}

void	ft_trim_end(char *ptr, char const *set)
{
	int	len;
	size_t	j;

	len = strlen(ptr) - 1;
	while (len >= 0)
	{
		j = 0;
		while (j < strlen(set))
		{
			if (ptr[len] == set[j])
				ptr[len] = '\0';
			j++;
		}
		if (ptr[len] == '\0')
			len--;
		else
			return ;
	}
}

int	main(void)
{
	char untrim[] = "    Hello World   ";
	char set[] = " ";
	char	*result;
	
	printf("%s\n", untrim);
	result = ft_strtrim(untrim, set);
	printf("%s\n", result);
	return (0);
}
