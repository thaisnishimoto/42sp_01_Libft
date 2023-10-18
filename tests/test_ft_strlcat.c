/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/10/18 00:56:04 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_return_value_when_size_equals_dlen)
{
	size_t	size = 4;
	const char	src[] = "Nishi";
	char	dest[4] = "Tha_";

	size_t	expected = 9;
	size_t	result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);

	mu_assert_int_eq(expected, result);
}

MU_TEST(test_change_string)
{
	size_t	size = 11;
	const char	src[] = "Nishimoto";
	char	dest[11] = "Thais ";

	char	expected[] = "Thais Nish\0";
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);

	mu_assert_string_eq(expected, dest);
}

MU_TEST(test_return_value_when_src_is_empty)
{
	size_t	size = 11;
	const char	src[] = "";
	char	dest[11] = "Thais ";

	size_t	expected = 6;
	size_t	result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);

	mu_assert_int_eq(expected, result);
}

MU_TEST(test_return_value_when_dest_has_one_space)
{
	size_t	size = 3;
	const char	src[] = "Nishimoto";
	char	dest[3] = "T ";

	size_t	expected = 11;
	size_t	result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_return_value_when_size_equals_dlen);
	MU_RUN_TEST(test_change_string);
	MU_RUN_TEST(test_return_value_when_src_is_empty);
	MU_RUN_TEST(test_return_value_when_dest_has_one_space);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
