/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/18 15:57:12 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>

MU_TEST(should_change_new_to_start_of_list)
{
	t_list	new;
	new.content = "new list";
	new.next = NULL;
	t_list	lst;
	lst.content = "old list";
	lst.next = NULL;
	t_list *ptr;
	ptr = &lst;
	
	printf("%s\n", (char *)ptr->content);
	ft_lstadd_front(&ptr, &new);
	printf("%s\n", (char *)ptr->content);
	char	expected[] = "new list";

	mu_assert_string_eq(expected, (char *)ptr->content);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(should_change_new_to_start_of_list);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
