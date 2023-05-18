/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:45:16 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/17 14:33:03 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"
#include <stdio.h>

int	numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	reverse_string(char *str)
{
	char	*start;
	char	*end;
	char	temp;

	start = str;
	end = str + ft_strlen(str) - 1;
	if (*str == '-')
	{
		start++;
	}
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

char	*checker(long int n1, int len)
{
	char	*str;

	if (n1 == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	char		*p;
	int			len;
	long int	n1;

	n1 = n;
	len = numlen(n1);
	str = checker(n1, len);
	p = str;
	if (n1 < 0)
	{
		*p++ = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		*p++ = (n1 % 10) + '0';
		n1 = n1 / 10;
		*p = '\0';
	}
	reverse_string(str);
	return (str);
}

// int main(void)
// {
// 	char *str;
// 	str = ft_itoa(-123456 | -654321);
// 	printf("%s\n", str);
// 	return(0);
// }