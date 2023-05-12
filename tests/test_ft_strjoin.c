/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/11 16:11:41 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_concatenate_of_2_strings)
{
	char	s1[] = "Thais ";
	char	s2[] = "Mina";

	char	expected[] = "Thais Mina";
	char	*result = ft_strjoin(s1, s2);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
}

MU_TEST(test_if_s2_is_empty)
{
	char	s1[] = "Thais";
	char	s2[] = "";

	char	expected[] = "Thais";
	char	*result = ft_strjoin(s1, s2);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
}

MU_TEST(test_if_s1_is_empty)
{
	char	s1[] = "";
	char	s2[] = "Mina";

	char	expected[] = "Mina";
	char	*result = ft_strjoin(s1, s2);
	printf("%s\n", result);

	mu_assert_string_eq(expected, result);
}

MU_TEST(test_if_s1_is_NULL)
{
	char	*s1 = NULL;
	char	s2[] = "Mina";

	int	expected = 1;
	int	result = 0;

	char	*ptr = ft_strjoin(s1, s2);
	if (ptr == NULL)
		result = 1;

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_concatenate_of_2_strings);
	MU_RUN_TEST(test_if_s2_is_empty);
	MU_RUN_TEST(test_if_s1_is_empty);
	MU_RUN_TEST(test_if_s1_is_NULL);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
