/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 17:13:59 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(get_uppercase_and_return_lowercase)
{
	int	c = 'A';
	int	expected = 'a';
	int	result;

	result = ft_tolower(c);
	printf("%c\n", (char)result);
	mu_assert_int_eq(expected, result);
}

MU_TEST(keep_lowercase_as_lowercase)
{
	int	c = 'a';
	int	expected = 'a';
	int	result;

	result = ft_tolower(c);
	printf("%c\n", (char)result);
	mu_assert_int_eq(expected, result);
}

MU_TEST(int_zero)
{
	int	c = 0;
	int	expected = 0;
	int	result;

	result = ft_tolower(c);
	printf("%d\n", result);
	mu_assert_int_eq(expected, result);
}
MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(get_uppercase_and_return_lowercase);
	MU_RUN_TEST(keep_lowercase_as_lowercase);
	MU_RUN_TEST(int_zero);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
