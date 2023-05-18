/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:52:31 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/16 13:08:20 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdio.h>

// char	my_custom_func(unsigned int i, char c)
// {
// 	if (i == 0)
// 		return (c - 32);
// 	return (c);
// }


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);

	p = str;
	while (*s)
	{
		*p = f(p - str, *s);
		p++;
		s++;
	}
	*p = '\0';
	return (str);
}

// char addOne(unsigned int i, char c) { return (i + c); }

// int main(void)
// {
//     char *s = ft_strmapi("1234", addOne);
//     printf("%s\n", s); // Imprimirá "1357"
//     free(s);
//     return 0;
// }