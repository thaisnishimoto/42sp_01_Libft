/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/16 16:54:02 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(should_return_string_42)
{
	int	n = 42;
	char	expected[] = "42";
	char	*result;

	result = ft_itoa(n);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_minus_42)
{
	int	n = -42;
	char	expected[] = "-42";
	char	*result;

	result = ft_itoa(n);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_0)
{
	int	n = 0;
	char	expected[] = "0";
	char	*result;

	result = ft_itoa(n);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_INT_MIN)
{
	int	n = -2147483648;
	char	expected[] = "-2147483648";
	char	*result;

	result = ft_itoa(n);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_string_42);
	MU_RUN_TEST(should_return_string_minus_42);
	MU_RUN_TEST(should_return_string_0);
	MU_RUN_TEST(should_return_string_INT_MIN);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
