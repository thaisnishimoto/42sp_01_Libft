/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:15:27 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 13:41:05 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num >= __INT_MAX__ || size >= __INT_MAX__ || (num
			* size) >= __INT_MAX__)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (num * size));
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, num * size);
	return (ptr);
}
