/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/22 12:04:17 by tmina-ni         ###   ########.fr       */
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
	t_list    *head = NULL;
	t_list    *ptr;

	head = malloc(sizeof(t_list));
	head->content = "1";
	head->next = NULL;
	ptr = ft_lstnew(ft_strdup("2"));
	ft_lstadd_back(&head->next, ptr); 
	ptr = ft_lstnew(ft_strdup("3"));
	ft_lstadd_back(&head->next->next, ptr);
	ptr = ft_lstnew(ft_strdup("4"));
	ft_lstadd_back(&head->next->next->next, ptr);
	ptr = head;
	while (ptr)
	{
		printf("Before:\n%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ptr = head;
	ft_lstdelone(head->next->next, del);
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
