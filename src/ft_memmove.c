/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:55:28 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/09 18:19:24 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_memmove() function copies n bytes from memory area src to memory 
area dest.The memory areas may overlap: copying takes place as though the 
bytes in src are first copied into a temporary array that does not 
overlap src or dest, and the bytes are then copied from the 
temporary array to dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	if (ptr_dest <= ptr_src)
	{
		while (n > 0)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			ptr_dest[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dst[15] = "you-you";
// 	char	src[15] = "fucker";
// 	puts("Before memmove:");
// 	printf("dst: %s\n", dst);
// 	// printf("src: %s\n", src);
// 	ft_memmove(dst, src, 4);
// 	puts("After memmove:");
// 	printf("dst: %s\n", dst);
// 	// printf("src: %s\n", src);
// 	return (0);
// }
