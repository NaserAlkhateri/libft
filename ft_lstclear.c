/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Naser\\ <Naser\\@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:27:36 by Naser\\          #+#    #+#             */
/*   Updated: 2023/11/18 12:33:45 by Naser\\         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst != NULL)
		{
			temp = *lst;
			del(temp->content);
			*lst = (*lst)->next;
			free(temp);
		}
	}
}
