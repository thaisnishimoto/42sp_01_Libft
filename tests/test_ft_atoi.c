/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/10/18 15:17:01 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(compare_to_original_atoi)
{
	int	result = ft_atoi("\n +42");
	int	expected = atoi("\n +42");
	
	printf("\\n +42: mine = %d | original = %d\n", result, expected);
	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_0_to_multiple_signs)
{
	const char	nptr[]= "--+--1";
	int	expected = 0;
	int	result;

	result = ft_atoi(nptr);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_minus_1_to_spaces_before)
{
	const char	nptr[]= "  -1";
	int	expected = -1;
	int	result;

	result = ft_atoi(nptr);
	printf("%d\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_0_to_signed_0)
{
	int	result = ft_atoi(" +0");
	int	expected = atoi(" +0");
	
	printf("\\n +0: mine = %d | original = %d\n", result, expected);
	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_0_to_minus_0)
{
	int	result = ft_atoi(" --0");
	int	expected = atoi(" --0");
	
	printf(" --0: mine = %d | original = %d\n", result, expected);
	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(compare_to_original_atoi);
	MU_RUN_TEST(should_return_0_to_multiple_signs);
	MU_RUN_TEST(should_return_minus_1_to_spaces_before);
	MU_RUN_TEST(should_return_0_to_signed_0);
	MU_RUN_TEST(should_return_0_to_minus_0);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
