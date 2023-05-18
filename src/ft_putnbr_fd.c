/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:25:46 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/16 15:50:28 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	if (n == INT_MIN)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-(n / 10), fd);
		num = -(n % 10) + '0';
		write(fd, &num, 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < 10)
	{
		num = n + '0';
		write(fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		num = (n % 10) + '0';
		write(fd, &num, 1);
	}
}

// int	main(void)
// {
// 	// ft_putnbr_fd(9, STDOUT_FILENO);
// 	ft_putnbr_fd(-42, STDOUT_FILENO);
// 	// ft_putnbr_fd(0, STDOUT_FILENO);
// 	// ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
// 	// ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
// 	return (0);
// }
