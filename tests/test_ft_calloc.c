/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/09 14:39:40 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(compate_to_original_calloc)
{
	size_t	nmemb = 5; //number of elements
	size_t	size = 5; //size of each element

	void	*result = ft_calloc(nmemb, size);
	void	*expected = calloc(nmemb, size);
	
	printf("mine = %zu | original = %zu\n", *(size_t *)result, *(size_t *)expected);
	mu_assert_int_eq(*(size_t *)expected, *(size_t *)result);
	free(result);
	free(expected);
}

MU_TEST(should_return_0_after_calloc)
{
	size_t	nmemb = 5; //number of elements
	size_t	size = 5; //size of each element

	void	*result = ft_calloc(nmemb, size);
	size_t	expected = 0;
	
	printf("%zu", *(size_t *)result);
	mu_assert_int_eq(expected, *(size_t *)result);
	free(result);
}

MU_TEST(should_return_NULL_if_size_is_zero)
{
	size_t	nmemb = 5; //number of elements
	size_t	size = 0; //size of each element
	int	result = 1;
	int	expected = 0;

	void	*ptr = ft_calloc(nmemb, size);
	if (ptr == NULL)
		result = 0;
	
	mu_assert_int_eq(expected, result);
	free(ptr);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(compate_to_original_calloc);
	MU_RUN_TEST(should_return_0_after_calloc);
	MU_RUN_TEST(should_return_NULL_if_size_is_zero);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
