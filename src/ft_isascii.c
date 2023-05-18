/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:43 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/04 18:16:57 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char c = '^';
//     if (ft_isascii(c))
//     {
//         printf("'%c' entered is ASCII \n", c);
//     }
//     else
//     {
//         printf("'%c' entered argument is not from ASCII \n", c);
//     }
//     return (0);
// }