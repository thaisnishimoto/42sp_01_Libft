/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 12:16:13 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_change_string)
{
	size_t	dsize = 4;
	const char	src[] = "fonte";
	char	dest[dsize];

	char	expected[] = "fon";
	ft_strlcpy(dest, src, dsize);
	printf("%s\n", dest);

	mu_assert_string_eq(expected, dest);
}

MU_TEST(test_return_value_is_src_lenght)
{
	size_t	dsize = 4;
	const char	src[] = "Nishimoto";
	char	dest[dsize];

	size_t	expected = 9;
	size_t	result = ft_strlcpy(dest, src, dsize);
	printf("%zu\n", result);

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_change_string);
	MU_RUN_TEST(test_return_value_is_src_lenght);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
