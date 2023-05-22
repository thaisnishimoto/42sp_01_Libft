/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/22 13:24:11 by tmina-ni         ###   ########.fr       */
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
	t_list    *head;
	t_list    *node2;
	t_list    *node3;
	t_list    *node4;

	head = ft_lstnew(ft_strdup("1"));
	node2 = ft_lstnew(ft_strdup("2"));
	node3 = ft_lstnew(ft_strdup("3"));
	node4 = ft_lstnew(ft_strdup("4"));
	head->next = node2; 
	node2->next = node3; 
	node3->next = node4; 
	ptr = head;
	while (ptr)
	{
		printf("Before:\n%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ptr = head;
	ft_lstclear(&ptr, del);
	while (ptr->next)
	{
		if(ptr->content)
			printf("After:\n%s\n", (char *)ptr->content);
		else
			printf("After:\n%s\n", "NULL");
		ptr = ptr->next;
	}
	char	expected[] = "2";
	mu_assert_string_eq(expected, (char *)head->next->content);
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
