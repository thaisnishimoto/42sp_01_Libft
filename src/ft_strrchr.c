/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:10:30 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/05 11:49:13 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	unsigned char	c_ascii;

	c_ascii = c;
	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c_ascii)
		{
			ptr = ((char *)s);
		}
		s++;
	}
	if (c_ascii == '\0')
		return ((char *)s);
	
	return (ptr);
}
