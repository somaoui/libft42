/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:43 by somaoui           #+#    #+#             */
/*   Updated: 2023/12/13 04:57:31 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*tmp1;

	if (src == NULL && dest == NULL)
		return (NULL);
	tmp = (char *) dest;
	tmp1 = (char *) src;
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp1[i];
		i++;
	}
	return (dest);
}
