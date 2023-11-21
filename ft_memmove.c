/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:51:37 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 02:06:27 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
		return (dest); 
	}
	else
		while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}