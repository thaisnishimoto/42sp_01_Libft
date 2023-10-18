/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:44:05 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/10/18 00:47:08 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_swap_num)
{
	int	a = 10;
	int	b = 20;
	int	expected_a = 20;
	int	expected_b = 10;

	ft_swap(&a, &b);
	mu_assert_int_eq(expected_a, a);
	mu_assert_int_eq(expected_b, b);
}

MU_TEST(test_swap_neg)
{
	int	a = -10;
	int	b = 20;
	int	expected_a = 20;
	int	expected_b = -10;

	ft_swap(&a, &b);
	mu_assert_int_eq(expected_a, a);
	mu_assert_int_eq(expected_b, b);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_swap_num);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_RUN_TEST(test_swap_neg);
	MU_REPORT();
	return MU_EXIT_CODE;
}
