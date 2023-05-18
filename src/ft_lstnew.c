/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:48:24 by brunrodr          #+#    #+#             */
/*   Updated: 2023/05/17 17:53:56 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*new;
// 	char	*str;

// 	str = "Hello World!";
// 	new = ft_lstnew(str);
// 	printf("%s\n", (char *)new->content);
// 	return (0);
// }