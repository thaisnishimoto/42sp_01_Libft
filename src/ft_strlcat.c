/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:23:50 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/10 11:47:56 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (size <= dest_len)
		return (src_len + size);

	while (*dst && size > 0)
	{
		dst++;
		size--;
	}

	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
// 	char dest[20] = "CCCCCCCCCCCCCCCCCCC";
// 	char src[20] = "BBBBBBBBBBBBBBBB";
// 	size_t size = 17;
// 	ft_strlcat(dest, src, size);
// 	printf("%s\n", dest);
// 	return (0);
// }