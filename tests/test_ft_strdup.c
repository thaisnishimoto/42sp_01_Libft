/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/11 15:19:14 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(should_return_str_thais)
{
	char	expected[] = "thais";
	char	*result = ft_strdup(expected);

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
}

MU_TEST(should_return_array_input_as_parameter)
{
	char	expected[] = "mina";
	char	*result = ft_strdup("mina");

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
}

MU_TEST(should_return_array_of_nums)
{
	char	expected[] = "2023";
	char	*result = ft_strdup(expected);

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_str_thais);
	MU_RUN_TEST(should_return_array_input_as_parameter);
	MU_RUN_TEST(should_return_array_of_nums);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
