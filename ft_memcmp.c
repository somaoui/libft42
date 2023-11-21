/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:30:39 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 01:49:31 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*res;
	const unsigned char	*res1;

	res = (const unsigned char *) s1;
	res1 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (res[i] != res1[i])
			return (res[i] - res1[i]);
		i++;
	}
	return (0);
}
