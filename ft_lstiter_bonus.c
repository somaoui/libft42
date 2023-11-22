/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:39:22 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 17:39:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstiter(t_list *lst, void *(*f)(void *))
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
