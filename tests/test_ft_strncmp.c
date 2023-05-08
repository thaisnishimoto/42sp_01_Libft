/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/07 23:46:36 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

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

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_0_when_comparing_strings_equal_up_to_n_5);
	MU_RUN_TEST(should_return_32_when_comparing_strings_that_differ_by_lower_to_uppercase);
	MU_RUN_TEST(should_return_0_when_n_is_0);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
