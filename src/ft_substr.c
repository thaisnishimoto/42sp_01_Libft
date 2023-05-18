/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:36 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/12 11:32:35 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);

	if (start >= slen)
	{
		return (ft_strdup(""));
	}
	len = ft_min(len, slen - start);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (len > 0)
	{
		*p = s[start];
		p++;
		start++;
		len--;
	}
	*p = '\0';
	return (str);
}

// int main(void)
// {
// 	char	*str;
// 	str = ft_substr("tripouille", 100, 1);
// 	printf("%s\n", str);
// 	return(0);
// }
