/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 16:19:44 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_change_string)
{
	size_t	size = 11;
	const char	src[] = "Nishimoto";
	char	dest[11] = "Thais ";

	char	expected[] = "Thais Nishi";
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);

	mu_assert_string_eq(expected, dest);
}

MU_TEST(test_return_value_when_size_equals_dlen)
{
	size_t	size = 6;
	const char	src[] = "Nishimoto";
	char	dest[6] = "Thais ";

	size_t	expected = 15;
	size_t	result = ft_strlcat(dest, src, size);
	printf("%zu\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_change_string);
	MU_RUN_TEST(test_return_value_when_size_equals_dlen);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
