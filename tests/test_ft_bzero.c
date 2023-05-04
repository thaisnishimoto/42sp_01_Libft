/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:29:24 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/04 15:53:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = "xxxxx";
	int	len;

	len = ft_strlen(str);
	printf("len = %d\n", len);
	ft_bzero(str, len);
	printf("str = %s\n", str);
	return (0);
}
