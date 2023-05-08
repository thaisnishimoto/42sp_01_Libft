/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/08 13:23:51 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(find_a_from_string_marvin)
{
	char	s[6] = "marvin";
	int	c = 'a';
	size_t	n = 3;

	char	*expected = s + 1;
	void	*result = ft_memchr(s, c, n);
	printf("%c\n", *(char *)result);

	mu_assert_int_eq(*expected, *(char *)result);
}

MU_TEST(find_O_from_string_NishimotO)
{
	const char	s[9] = "NishimotO";
	int	c = 'O';
	size_t	n = 9;

	const char	*expected = s + 8;
	void	*result = ft_memchr(s, c, n);
	printf("%c\n", *(char *)result);

	mu_assert_int_eq(*expected, *(char *)result);
}

MU_TEST(find_int_5_from_string_Thai5)
{
	const char	s[] = "Thai5";
	int	c = '5';
	size_t	n = 10;

	const char	*expected = &s[4];
	void	*result = ft_memchr(s, c, n);
	printf("%d\n", *(char *)result);

	mu_assert_int_eq(*expected, *(const char *)result);
}

MU_TEST(find_first_t_from_string_batata)
{
	const char	s[] = "batata";
	int	c = 't';
	size_t	n = 9;

	const char	*expected = &s[2];
	char	*result = ft_memchr(s, c, n);
	printf("%c\n", *(char *)result);

	mu_assert_int_eq(*expected, *(const char *)result);
}

MU_TEST(search_letter_not_in_string)
{
	const char	s[] = "marvin";
	int	c = 't';
	size_t	n = 9;

	int	expected = 1;
	void	*ptr = ft_memchr(s, c, n);
	int	result = 0;
	if (ptr == NULL)
		result = 1;	

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(find_a_from_string_marvin);
	MU_RUN_TEST(find_O_from_string_NishimotO);
	MU_RUN_TEST(find_int_5_from_string_Thai5);
	MU_RUN_TEST(find_first_t_from_string_batata);
	MU_RUN_TEST(search_letter_not_in_string);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
