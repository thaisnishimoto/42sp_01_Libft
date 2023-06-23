/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_utoa_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/06/23 19:29:32 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(should_return_string_42)
{
	unsigned int	n = 42;
	char	expected[] = "2A";
	char	*result;

	result = ft_utoa_base(n, UPP_HEXBASE);
	printf("Expected: %X\n", n);
	printf("Result: %s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_minus_42)
{
	unsigned int	n = -42;
	char	expected[] = "FFFFFFD6";
	char	*result;

	result = ft_utoa_base(n, UPP_HEXBASE);
	printf("Expected: %X\n", n);
	printf("Result: %s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_0)
{
	unsigned int	n = 0;
	char	expected[] = "0";
	char	*result;

	result = ft_utoa_base(n, UPP_HEXBASE);
	printf("Expected: %X\n", n);
	printf("Result: %s\n", result);

	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(should_return_string_INT_MIN)
{
	unsigned int	n = -2147483648;
	char	expected[] = "80000000";
	char	*result;

	result = ft_utoa_base(n, UPP_HEXBASE);
	printf("Expected: %X\n", n);
	printf("Result: %s\n", result);

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
