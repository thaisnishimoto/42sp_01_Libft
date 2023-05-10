/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:07:39 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 17:59:22 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t	i;

	if (start >= ft_strlen(s))
		return (NULL);
	ptr = malloc((len + 1) * 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[(size_t)start])
	{
		ptr[i] = s[(size_t)start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
