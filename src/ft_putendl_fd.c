/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:11:20 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/12 12:45:40 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("Hello World!", STDOUT_FILENO);
// 	ft_putendl_fd("", STDOUT_FILENO);
// 	ft_putendl_fd(NULL, STDOUT_FILENO);
// 	return (0);
// }
