/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 11:54:44 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(removes_whitespace_at_end_of_string)
{
	char	untrim[] = "Hello World   ";
	char	set[] = " ";
	char	*result = ft_strtrim(untrim, set);
	char	*expected = "Hello World";

	printf("%s\n", result);
	mu_assert_string_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(removes_whitespace_at_end_of_string);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
