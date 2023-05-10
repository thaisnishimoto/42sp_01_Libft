/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:56:36 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 11:44:13 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_trim_right(char *ptr, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	size_t	j;
	char	*ptr;

	ptr = malloc(ft_strlen(s1) * 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] != set[j])
				j++;
			else
				break;
		}
		if (s1[i] != set[j])
		{
			while (s1[i])
				*ptr++ = s1[i++];
		}
		i++;
	}
	printf("%s\n", &ptr[0]);
	ft_trim_right(&ptr[0], set);
	return (&ptr[0]);
}

void	ft_trim_right(char *ptr, const char *set)
{
	int	len;
	size_t	j;

	len = ft_strlen(ptr) - 1;
	while (len >= 0)
	{
		j = 0;
		while (j < ft_strlen(set))
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
