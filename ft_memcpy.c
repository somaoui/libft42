/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:43 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 01:14:25 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char *tmp;
	char *tmp1;

	if (src == NULL && dest == NULL)
		return (NULL);
	tmp = (char *) dest;
	tmp1 = (char *) src;
	i = 0;
	
	while (i < len)
	{
		tmp[i] = tmp1[i];
		i++;
	}
	return (dest);
}
