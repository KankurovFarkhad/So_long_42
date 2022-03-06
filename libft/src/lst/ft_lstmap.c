/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:22:11 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 19:22:12 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*next;

	if (!lst)
		return ((void *)0);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return ((void *)0);
	next = new;
	tmp = lst->next;
	while (tmp)
	{
		next->next = ft_lstnew((*f)(tmp->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return ((void *)0);
		}
		next = next->next;
		tmp = tmp->next;
	}
	return (new);
}
