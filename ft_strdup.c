/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:34:40 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/18 03:16:30 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*mall;

	i = 0;
	if (src == NULL)
		return (NULL);
	mall = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!mall)
		return (0);
	while (src[i])
	{
		mall[i] = src[i];
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
