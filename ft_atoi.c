/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: somaoui <somaoui@student.42lyon.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:37:54 by somaoui           #+#    #+#             */
/*   Updated: 2023/12/17 21:33:14 by somaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_atoi(long nbr, int sign)
{
	long	check;

	check = (long) nbr * 10;
	if (check / 10 != nbr)
	{
		if (sign > 0)
			return (-1);
		return (0);
	}
	return (1);
}

static int	ft_whitspaces(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long long	nbr;
	char		value;
	int			sign;
	size_t		i;

	nbr = 0;
	value = 0;
	sign = 1;
	i = ft_whitspaces(str);
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = str[i] - '0';
		if (overflow_atoi(nbr, sign) != 1)
			return (overflow_atoi(nbr, sign));
		nbr = nbr * 10 + value;
		i++;
	}
	return (nbr * sign);
}
