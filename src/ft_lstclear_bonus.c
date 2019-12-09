/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:40:43 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/09 17:56:41 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*tmp;

	l = *lst;
	if (lst)
	{
		while (l != NULL)
		{
			tmp = l;
			l = l->next;
			del(tmp->content);
			free(l);
		}
		*lst = NULL;
	}
}
