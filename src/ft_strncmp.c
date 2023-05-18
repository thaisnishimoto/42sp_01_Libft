/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:07:10 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/16 13:38:29 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2 || n <= 0)
		return (0);
	while ((n > 0) && (*s1 != '\0' && *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	s1 = "Tripouille";
// 	s2 = "TripouilleX";
// 	n = 42;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	return (0);
// }

