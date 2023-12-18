/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:07:53 by somaoui           #+#    #+#             */
/*   Updated: 2023/12/17 23:47:43 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	temp;
	char	*str;

	str = NULL;
	temp = (char) c;
	if (temp == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == temp)
			str = (char *) s;
		s++;
	}
	return (str);
}
