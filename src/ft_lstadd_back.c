/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:13:18 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/18 18:27:11 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;

	if (!*lst)
	{
		*lst = new;
		return ;
	}

	aux = *lst;
	while (aux->next)
	{
		aux = aux->next;
	}
	aux->next = new;
}

int main(void)
{
	t_list	*lst = NULL;
	t_list	*upd;

	ft_lstadd_back(&lst, ft_lstnew("1"));
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3"));
	ft_lstadd_back(&lst, ft_lstnew("4"));
	upd = lst;
	while (upd)
	{
		printf("%s\n", (char *)upd->content);
		upd = upd->next;
	}
	return (0);
}