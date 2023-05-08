/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:20:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/08 18:47:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned char	i;
	int				sign;
	int				num;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	sign = 0;
	if (nptr[i++] == '-')
	{
		sign = -1;
		while (nptr[i] == '-')
			i++;
		if (nptr[i] == '+')
			return (0);
	}
	else if (nptr[i] == '+')
	{
		while (nptr[i] == '+')
			i++;
		if (nptr[i] == '-')
			return (0);
	}
	num = 0;
	if (nptr[i] < '0' && nptr[i] > '9')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}
