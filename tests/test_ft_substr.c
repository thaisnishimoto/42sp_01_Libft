/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/10 16:54:43 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

MU_TEST(should_return_substring_found)
{
	char	s[] = "oqueachar???";
	unsigned int	start = 4;
	size_t	len = 5;
	char	expected[] = "achar";

	char	*ptr = ft_substr(s, start, len);
	printf("\n%s\n", ptr);
	mu_assert_string_eq(expected, ptr);
	free(ptr);
}

MU_TEST(substring_limited_by_s_size)
{
	char	s[] = "oqueacha";
	unsigned int	start = 4;
	size_t	len = 10;
	char	expected[] = "acha";

	char	*ptr = ft_substr(s, start, len);
	printf("\n%s\n", ptr);
	mu_assert_string_eq(expected, ptr);
	free(ptr);
}

MU_TEST(size_len_is_0)
{
	char	s[] = "thaisminanishimoto";
	unsigned int	start = 5;
	size_t	len = 0;
	char	expected[] = "";

	char	*ptr = ft_substr(s, start, len);
	printf("\n%s\n", ptr);
	mu_assert_string_eq(expected, ptr);
	free(ptr);
}

MU_TEST(s_is_empty)
{
	char	s[] = "";
	unsigned int	start = 5;
	size_t	len = 10;
	char	expected[] = "";

	char	*ptr = ft_substr(s, start, len);
	printf("\n%s\n", ptr);
	mu_assert_string_eq(expected, ptr);
	free(ptr);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_substring_found);
	MU_RUN_TEST(substring_limited_by_s_size);
	MU_RUN_TEST(size_len_is_0);
	MU_RUN_TEST(s_is_empty);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
