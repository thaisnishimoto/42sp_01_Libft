/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:28:48 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/12 11:30:53 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
// #include <stdio.h>
// #include <stdlib.h>

/*
The function ft_strjoin() concatenates two 
strings s1 and s2, allocating memory for the new string. 
If the allocation fails, the function returns NULL.
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if ((str == NULL) && (!s1 || !s2))
	{
		return (NULL);
	}
	p = str;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *str;
// 	str = ft_strjoin("tripouille", "42");
// 	printf("%s\n", str);
// 	return (0);
// }

