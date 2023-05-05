/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 17:50:58 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(find_a_from_string_marvin)
{
	const char	s[] = "marvin";
	int	c = 'a';

	const char	*expected = &s[1];
	char	*result = ft_strrchr(s, c);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(find_O_from_string_NishimotO)
{
	const char	s[] = "NishimotO";
	int	c = 'O';

	const char	*expected = &s[8];
	char	*result = ft_strrchr(s, c);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(find_int_5_from_string_Thai5)
{
	const char	s[] = "Thai5";
	int	c = '5';

	const char	*expected = &s[4];
	char	*result = ft_strrchr(s, c);
	printf("%d\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(find_last_t_from_string_batata)
{
	const char	s[] = "batata";
	int	c = 't';

	const char	*expected = &s[4];
	char	*result = ft_strrchr(s, c);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(find_a_from_string_marvin);
	MU_RUN_TEST(find_O_from_string_NishimotO);
	MU_RUN_TEST(find_int_5_from_string_Thai5);
	MU_RUN_TEST(find_last_t_from_string_batata);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
