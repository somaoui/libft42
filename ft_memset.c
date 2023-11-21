/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:40 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 00:50:30 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int a, size_t len)
{
	size_t			i;
	unsigned char	*res;

	res = (unsigned char *)(b);
	i = 0;
	while (i < len)
	{
		res[i] = (unsigned char) a;
		i++;
	}
	return (b);
}
