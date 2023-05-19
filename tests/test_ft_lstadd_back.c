/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/19 18:03:49 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(should_return_content_of_last_node)
{
	t_list    *lst = NULL;
	t_list    *upd;

	ft_lstadd_front(&lst, ft_lstnew("3")); //third node
	ft_lstadd_front(&lst, ft_lstnew("2")); //second node
	ft_lstadd_front(&lst, ft_lstnew("1")); //first node
	ft_lstadd_back(&lst, ft_lstnew("4")); //last node
	upd = lst;
	while (upd)
	{
		printf("%s\n", (char *)upd->content);
		upd = upd->next;
	}
	char	expected[] = "4";
	upd = ft_lstlast(lst);
	mu_assert_string_eq(expected, (char *)upd->content);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_content_of_last_node);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
