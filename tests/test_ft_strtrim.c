/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/12 18:58:44 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(removes_whitespace_at_beginning_of_string)
{
	char	untrim[] = "   Hello World";
	char	set[] = " ";
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_whitespace_at_end_of_string)
{
	char	untrim[] = "Hello World   ";
	char	set[] = " ";
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_0_at_beginning_and_end_of_string)
{
	char	untrim[] = "00Hello World00";
	char	set[] = "0";
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_both_whitespace_and_0_at_beginning_and_end_of_string)
{
	char	untrim[] = "0 0 Hello World 0 0";
	char	set[22] = {'0', ' '};
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_entire_string_when_set_not_found)
{
	char	untrim[] = "Hello World";
	char	set[22] = {'0', ' '};
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_empty_string_is_set)
{
	char	untrim[] = "   xxx   xxx";
	char	set[22] = {' ', 'x'};
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_d)
{
	char	untrim[] = "abcdba";
	char	set[22] = "acb";
	char	*result = ft_strtrim(untrim, set);
	char	expected[] = "d";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(removes_whitespace_at_beginning_of_string);
	MU_RUN_TEST(removes_whitespace_at_end_of_string);
	MU_RUN_TEST(removes_0_at_beginning_and_end_of_string);
	MU_RUN_TEST(removes_both_whitespace_and_0_at_beginning_and_end_of_string);
	MU_RUN_TEST(returns_entire_string_when_set_not_found);
	MU_RUN_TEST(returns_empty_string_is_set);
	MU_RUN_TEST(returns_d);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
