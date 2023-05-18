/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:52:58 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/10 13:34:01 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// int	main(void)
// {
// 	char str[12] = "1234567b90";
// 	int	 sign;
// 	int	 result;
	
// 	sign = ft_atoi(str);
// 	result = ft_atoi(str);
// 	printf("The string %s is converted to %d \n", str, result);
// 	return (0);
// }
