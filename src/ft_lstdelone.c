/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:56:06 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 18:26:28 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*upd;

	ft_lstadd_front(&lst, ft_lstnew("1"));
	ft_lstadd_front(&lst, ft_lstnew("2"));
	ft_lstadd_front(&lst, ft_lstnew("3"));
	ft_lstadd_front(&lst, ft_lstnew("4"));
	upd = lst;
	while (upd)
	{
		printf("%s\n", (char *)upd->content);
		upd = upd->next;
	}
	return (0);
}
