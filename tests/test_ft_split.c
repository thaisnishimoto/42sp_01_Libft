/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/16 13:41:08 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdio.h>

MU_TEST(should_divide_chars_delimited_by_num_1)
{
	char	delimiter = '1';
	char	string[] = "a1b";
	char	*expected[] = {"a", "b"};
	char	**result;

	result = ft_split(string, delimiter);
	
	mu_assert_string_eq(expected[0], result[0]);
	printf("\n%s\n", result[0]);
	mu_assert_string_eq(expected[1], result[1]);
	printf("\n%s\n", result[1]);
	free(result[0]);
	free(result[1]);
	free(result);
}

MU_TEST(should_divide_3_strings_delimited_by_comma)
{
	char	delimiter = ',';
	char	string[] = "aaa,bbb,ccc";
	char	*expected[] = {"aaa", "bbb", "ccc"};
	char	**result;

	result = ft_split(string, delimiter);
	
	mu_assert_string_eq(expected[0], result[0]);
	printf("\n%s\n", result[0]);
	mu_assert_string_eq(expected[1], result[1]);
	printf("\n%s\n", result[1]);
	mu_assert_string_eq(expected[2], result[2]);
	printf("\n%s\n", result[2]);
	free(result[0]);
	free(result[1]);
	free(result[2]);
	free(result);
}

MU_TEST(should_divide_2_strings_delimited_by_double_char)
{
	char	delimiter = ',';
	char	string[] = "aaa,,bbb";
	char	*expected[] = {"aaa", "bbb"};
	char	**result;

	result = ft_split(string, delimiter);
	
	mu_assert_string_eq(expected[0], result[0]);
	printf("\n%s\n", result[0]);
	mu_assert_string_eq(expected[1], result[1]);
	printf("\n%s\n", result[1]);
	free(result[0]);
	free(result[1]);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_divide_chars_delimited_by_num_1);
	MU_RUN_TEST(should_divide_3_strings_delimited_by_comma);
	MU_RUN_TEST(should_divide_2_strings_delimited_by_double_char);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
