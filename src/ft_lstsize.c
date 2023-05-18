/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:47:26 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 16:32:30 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);

	return (1 + ft_lstsize(lst->next));
}

// int main(void)
// {
// 	t_list	*lst;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	*new3;

// 	new1 = (t_list *)malloc(sizeof(t_list));
// 	new2 = (t_list *)malloc(sizeof(t_list));
// 	new3 = (t_list *)malloc(sizeof(t_list));

// 	lst = NULL;
// 	new1->next = new2;
// 	new2->next = new3;
// 	new3->next = NULL;

// 	int size = ft_lstsize(lst);
// 	printf("Before link to a list: %d\n", size);

// 	lst = new1;
// 	size = ft_lstsize(lst);

// 	printf("After link to a list: %d\n", ft_lstsize(lst));
// 	return (0);
// }
