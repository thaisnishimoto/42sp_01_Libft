/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/18 16:34:47 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(should_count_2_nodes_in_list)
{
	int	result;
	result = 0;
	int	expected;
	expected = 2;

	t_list	*lst1;
	lst1 = ft_lstnew("list 1");
	t_list	*lst2;
	lst2 = ft_lstnew("list 2");
	t_list *head;
	head = lst2;
	ft_lstadd_front(&head, lst1);

	result = ft_lstsize(head);
	printf("%s\n", (char *)head->content);

	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_count_2_nodes_in_list);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
