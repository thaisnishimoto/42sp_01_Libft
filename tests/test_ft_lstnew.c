/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/18 14:13:45 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(should_return_pointer_to_tlist_with_content_changed)
{
	char	str[] = "Hello World";
	t_list	*result;

	result = ft_lstnew(str);
	printf("%s\n", (char *)result->content);
	char	expected[] = "Hello World";

	mu_assert_string_eq(expected, (char *)result->content);
	free(result);
}

MU_TEST(should_return_pointer_to_tlist_with_content_empty)
{
	char	array[] = "";
	t_list	*result;

	result = ft_lstnew(array);
	printf("%s\n", (char *)result->content);
	char	expected[] = "";

	mu_assert_string_eq(expected, (char *)result->content);
	free(result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_pointer_to_tlist_with_content_changed);
	MU_RUN_TEST(should_return_pointer_to_tlist_with_content_empty);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
