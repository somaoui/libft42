/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:09:18 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 03:13:30 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	char	*ptr;
	size_t	tot;
	size_t	i;

	tot = size * nmb;
	ptr = (char *)malloc(size * nmb);
	if (ptr == 0)
		return (0);
	while (i < tot)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *) ptr);
}
