/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:38:45 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/12 13:07:58 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_striteri applies the function f to each character of the string s, 
passing its index as first argument. Each character is passed by address 
to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	pos;

	pos = 0;
	if (!s || !f)
		return ;
	while (*s)
	{
		f(pos, s);
		s++;
		pos++;
	}
}

// int main(void)
// {
// 	char str[] = "kickass";
// 	printf("Original string is: %s\n", str);

// 	ft_striteri(str, ft_toupper);
// 	printf("Modified string is: %s\n", str);
// 	return(0);
// }

// int main(void)
// {
// 	char	*str;
// 	str = ft_strdup("tripouille");
// 	ft_striteri(str, ft_putchar_fd);
// 	return(0);
// }
