/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/08 18:01:23 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(should_return_1_to_even_minus_sign)
{
	const char	nptr[]= "--+--1";
	int	expected = 1;
	int	result;

	result = ft_atoi(nptr);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_minus_1_to_odd_minus_sign)
{
	const char	nptr[]= "--+-1";
	int	expected = -1;
	int	result;

	result = ft_atoi(nptr);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}
MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_1_to_even_minus_sign);
	MU_RUN_TEST(should_return_minus_1_to_odd_minus_sign);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
