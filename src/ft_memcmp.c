/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:38:58 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/03 18:43:47 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0 || *(int*)s1 == *(int*)s2)
	{
		return (0);
	}
	while ((n > 0) && ((int *)s1 != NULL && (int *)s2 != NULL))
	{
		if ((unsigned int*)s1 != (unsigned int*)s2)
		{
			return ((unsigned int*)s1 - (unsigned int*)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	// char mem1[] = "sdsddffdfdfdfd";
// 	// char mem2[] = "fucker";
// 	int result = ft_memcmp(s, sCpy, 4); 

// 	if (result < 0)
// 	{
// 		printf("mem1 is lower than mem2");
// 	}
// 	else if (result == 0)
// 	{
// 		printf("mem1 and mem2 are equals");
// 	}
// 	else
// 	{
// 		printf("mem1 are greater than mem2");
// 	}
// 	return(0);
// }
