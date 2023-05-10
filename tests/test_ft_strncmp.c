/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 12:32:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"
#include <string.h>

MU_TEST(should_return_0_when_comparing_strings_equal_up_to_n_5)
{
	const char	s1[] = "marvin";
	const char	s2[] = "marviN";
	size_t	n = 5;

	int	expected = 0;
	int	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_32_when_comparing_strings_that_differ_by_lower_to_uppercase)
{
	const char	s1[] = "marvin";
	const char	s2[] = "marviN";
	size_t	n = 6;

	int	expected = 32;
	int	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_0_when_n_is_0)
{
	const char	s1[] = "marvin";
	const char	s2[] = "marviN";
	size_t	n = 0;

	int	expected = 0;
	int	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_stop_at_null_and_return_0)
{
	const char	s1[] = "marvi\0n";
	const char	s2[] = "marvi\0N";
	size_t	n = 7;

	int	expected = 0;
	int	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_compare_if_only_s1_is_empty)
{
	const char	s1[] = "";
	const char	s2[] = "marvin";
	size_t	n = 7;

	int	expected = -109;
	int	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_0_when_comparing_strings_equal_up_to_n_5);
	MU_RUN_TEST(should_return_32_when_comparing_strings_that_differ_by_lower_to_uppercase);
	MU_RUN_TEST(should_return_0_when_n_is_0);
	MU_RUN_TEST(should_stop_at_null_and_return_0);
	MU_RUN_TEST(should_compare_if_only_s1_is_empty);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
