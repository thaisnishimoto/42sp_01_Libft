/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:57:41 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 15:56:47 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dst[dlen])
		dlen++;
	slen = 0;
	while (src[slen])
		slen++;
	i = 0;
	while (i < size -1 || src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (dlen >= size)
		return (slen + size);
	else
		return (slen + dlen);
}
