/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 17:08:04 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(change_lowercase_and_returns_uppercase)
{
	int	c = 'a';
	int	expected = 'A';
	int	result;

	result = ft_toupper(c);
	printf("%d\n", result);
	mu_assert_int_eq(expected, result);
}

MU_TEST(keep_uppercase_as_uppercase)
{
	int	c = 'A';
	int	expected = 'A';
	int	result;

	result = ft_toupper(c);
	printf("%d\n", result);
	mu_assert_int_eq(expected, result);
}

MU_TEST(non_unsigned_char)
{
	int	c = 0;
	int	expected = 0;
	int	result;

	result = ft_toupper(c);
	printf("%d\n", result);
	mu_assert_int_eq(expected, result);
}
MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(change_lowercase_and_returns_uppercase);
	MU_RUN_TEST(keep_uppercase_as_uppercase);
	MU_RUN_TEST(non_unsigned_char);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
