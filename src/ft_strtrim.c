/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:42:39 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/12 17:26:09 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*end;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1);
	while (ft_strchr(set, *start) && *start)
	{
		start++;
	}
	while (ft_strchr(set, *(end - 1)) && end > start)
	{
		end--;
	}
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, start, end - start + 1);
	return (str);
}

// int	main(void)
// {
// 	char *str;
// 	str = ft_strtrim("tripouille   xxx", " x");
// 	printf("%s\n", str);
// 	return (0);
// }