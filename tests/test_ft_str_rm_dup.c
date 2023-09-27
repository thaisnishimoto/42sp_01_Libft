/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_rm_dup.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:23:37 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/09/27 15:43:29 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(removes_whitespace_at_beginning_of_string)
{
	char	str[] = "   Hello World";
	char	c = ' ';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = " Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_whitespace_at_end_of_string)
{
	char	str[] = "Hello World   ";
	char	c = ' ';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "Hello World ";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_0_at_beginning_and_end_of_string)
{
	char	str[] = "00Hello World00";
	char	c ='0';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "0Hello World0";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(removes_slash_from_dir_path)
{
	char	str[] = "//////////bin/////////cat";
	char	c = '/';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "/bin/cat";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_original_path_when_no_slash_dup)
{
	char	str[] = "/bin/cat";
	char	c = '/';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "/bin/cat";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_entire_string_when_c_not_found)
{
	char	str[] = "Hello World";
	char	c = '0';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(returns_one_char_string_is_c)
{
	char	str[] = "xxxxxx";
	char	c = 'x';
	char	*result = ft_str_rm_dup(str, c);
	char	expected[] = "x";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(removes_whitespace_at_beginning_of_string);
	MU_RUN_TEST(removes_whitespace_at_end_of_string);
	MU_RUN_TEST(removes_0_at_beginning_and_end_of_string);
	MU_RUN_TEST(removes_slash_from_dir_path);
	MU_RUN_TEST(returns_original_path_when_no_slash_dup);
	MU_RUN_TEST(returns_entire_string_when_c_not_found);
	MU_RUN_TEST(returns_one_char_string_is_c);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
