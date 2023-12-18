/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:26:45 by somaoui           #+#    #+#             */
/*   Updated: 2023/11/22 19:36:47 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb > 0)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	long		nbr;
	size_t		neg;

	size = count_size((long) n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	nbr = (long) n;
	neg = 0;
	if (n < 0)
	{
		nbr *= -1;
		str[0] = '-';
		neg = 1;
	}
	str[size] = '\0';
	while (size > neg)
	{
		str[size - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	return (str);
}
