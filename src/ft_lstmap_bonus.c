/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:00:36 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/09 18:08:23 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_elem;
	t_list		*new_list;
	t_list		*current;

	(void)(del);
	if (!(new_list = malloc(sizeof(t_list))))
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_elem = ft_lstnew(f(lst));
		if (new_list == NULL)
			new_list = new_elem;
		else
			current->next = new_elem;
		current = new_elem;
		lst = lst->next;
	}
	return (new_list);
}
