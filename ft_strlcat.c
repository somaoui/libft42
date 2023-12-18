/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:38 by somaoui           #+#    #+#             */
/*   Updated: 2023/12/13 04:59:27 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	index;

	lendest = ft_strlen(dst);
	index = 0;
	while (dst[index])
		index++;
	i = 0;
	while (src[i] && (i + index + 1) < (size))
	{
		dst[index + i] = src[i];
		i++;
	}
	if (i < size)
		dst[index + i] = '\0';
	if (size <= lendest)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + lendest);
}
