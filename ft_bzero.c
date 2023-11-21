/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:46 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/08 00:15:19 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *new;

	i = 0;
	new = (unsigned char *)s;
	while (i < n)
	{
		new[i] = 0;
		i++;
	}
}