/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/09 16:51:51 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(should_return_pointer_to_first_char_of_big_when_little_same_as_big)
{
	const char	big[] = "thais";
	const char	little[] = "thais";
	size_t	len = 5;

	const char	*expected = &big[0];
	const char	*result = ft_strnstr(big, little, len);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(should_return_pointer_to_first_occurance_when_little_appears_twice_in_big)
{
	char	big[] = "thaisminathaismina";
	char	little[] = "mina";
	size_t	len = 18;

	char	*expected = &big[5];
	char	*result = ft_strnstr(big, little, len);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(should_return_pointer_to_big_when_little_is_empty)
{
	char	big[] = "thaisminathaismina";
	char	*little = NULL;
	size_t	len = 18;

	char	*expected = big;
	char	*result = ft_strnstr(big, little, len);
	printf("%c\n", *result);

	mu_assert_int_eq(*expected, *result);
}

MU_TEST(should_return_pointer_to_NULL_when_only_4_chars_are_searched)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char *ptr;
	int	result = 0;
	int	expected = 1;

	ptr = ft_strnstr(largestring, smallstring, 4);
	if (ptr == NULL)
		result = 1;

	mu_assert_int_eq(expected, result);
}

MU_TEST(should_return_pointer_to_NULL_when_little_bigger_than_big)
{
	const char	*largestring = "Bar";
	const char	*smallstring = "Bar Baz";
	char *ptr;
	int	result = 0;
	int	expected = 1;

	ptr = ft_strnstr(largestring, smallstring, 4);
	if (ptr == NULL)
		result = 1;

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_pointer_to_first_char_of_big_when_little_same_as_big);
	MU_RUN_TEST(should_return_pointer_to_first_occurance_when_little_appears_twice_in_big);
	MU_RUN_TEST(should_return_pointer_to_big_when_little_is_empty);
	MU_RUN_TEST(should_return_pointer_to_NULL_when_only_4_chars_are_searched);
	MU_RUN_TEST(should_return_pointer_to_NULL_when_little_bigger_than_big);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
