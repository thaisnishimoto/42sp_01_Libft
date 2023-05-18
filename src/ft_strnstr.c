/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:35:29 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 18:00:00 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	lenght;

	lenght = ft_strlen(s2);
	if (lenght == 0)
	{
		return ((char *)s1);
	}
	while (*s1 != '\0' && n >= lenght)
	{
		if ((*s1 == *s2) && (ft_strncmp(s1, s2, lenght) == 0))
		{
			return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (0);
}
