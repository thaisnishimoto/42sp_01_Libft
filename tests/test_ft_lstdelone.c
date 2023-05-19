/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/19 19:46:47 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

void	del(void *content)
{
	free(content);
}

MU_TEST(should_return_content_of_last_node_without_a_node_in_the_middle)
{
	t_list    *lst = NULL;
	t_list    *upd;

	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("4"))); //fourth node
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3"))); //third node
	ft_lstdelone(&st, del);
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2"))); //second node
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1"))); //first node
	upd = lst;
	while (upd)
	{
		printf("Before:\n%s\n", (char *)upd->content);
		upd = upd->next;
	}
	upd = lst;
//	ft_lstdelone(third, del);
//	{
//		printf("After:\n%s\n", (char *)upd->content);
//		upd = upd->next;
//	}
	char	expected[] = "4";
	mu_assert_string_eq(expected, (char *)upd->content);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_return_content_of_last_node_without_a_node_in_the_middle);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
