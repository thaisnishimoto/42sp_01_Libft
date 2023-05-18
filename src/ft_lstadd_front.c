/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:32:28 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 18:26:45 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;

	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *lst = NULL;
// 	t_list *upd;
	
// 	ft_lstadd_front(&lst, ft_lstnew("loser"));
// 	ft_lstadd_front(&lst, ft_lstnew("fucker"));
// 	upd = lst;
// 	while (upd)
// 	{
// 		printf("%s\n", (char *)upd->content);
// 		upd = upd->next;
// 	}
// 	return(0);
// }