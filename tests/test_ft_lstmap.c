/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:33 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

void	del(void *content)
{
	free(content);
}

void	*add_one(void *str)
{
	void	*
}

MU_TEST(should_return_content_of_last_node_without_a_node_in_the_middle)
{
	t_list    *head;
	t_list    *ptr;
	t_list    *result;

	head = ft_lstnew(ft_strdup("1"));
	ptr = ft_lstnew(ft_strdup("2"));
	ft_lstadd_back(&head->next, ptr); 
	ptr = ft_lstnew(ft_strdup("3"));
	ft_lstadd_back(&head->next->next, ptr);
	ptr = ft_lstnew(ft_strdup("4"));
	ft_lstadd_back(&head->next->next->next, ptr);
	result = ft_lstmap(head, add_one, del);
	ptr = result;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	char	expected[] = "2";
	mu_assert_string_eq(expected, (char *)result->content);
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
