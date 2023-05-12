/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:56:36 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/12 20:01:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	count_left;
	size_t	count_right;
	size_t	trim_len;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	count_left = 0;
	while (ft_strchr(set, s1[count_left]))
		count_left++;
	count_right = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[count_right]))
		count_right--;
	trim_len = count_right - count_left;
	ptr = malloc((trim_len + 1)* sizeof(char));
	ft_strlcpy(ptr, &s1[count_left], trim_len);
	return (ptr);	
}
