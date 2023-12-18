/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:57:45 by somaoui           #+#    #+#             */
/*   Updated: 2023/12/13 02:29:45 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_here(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (0);
	while (is_here(set, s1[start]) == 1)
		start++;
	if (s1[start] == 0)
		return (ft_strdup(""));
	while (is_here(set, s1[end]) == 1)
		end--;
	if (start > end)
		return (0);
	new = malloc(sizeof(char) * (end - start + 2));
	if (!new)
		return (0);
	ft_memcpy(new, (s1 + start), (end - start + 1));
	new[end - start + 1] = '\0';
	return (new);
}
