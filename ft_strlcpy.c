/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:50:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 12:05:35 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	slen;

	index = 0;
	while (index < size - 1 && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	slen = 0;
	while (src[slen])
		slen++;
	return (slen);
}
