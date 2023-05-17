/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/17 11:48:10 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

char	ft_addnum(unsigned int n, char c)
{
	char	b;

	b = c + n;
	return (b);
}

char	ft_minus_num(unsigned int n, char c)
{
	char	b;

	b = c - n;
	return (b);
}

MU_TEST(should_return_changed_string_add)
{
	char	str[] = "1234";
	char	*result;

	result = ft_strmapi(str, ft_addnum);
	char expected[] = "1357";
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_changed_string_minus)
{
	char	str[] = "1234";
	char	*result;

	result = ft_strmapi(str, ft_minus_num);
	char expected[] = "1111";
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_changed_string_add);
	MU_RUN_TEST(should_return_changed_string_minus);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
