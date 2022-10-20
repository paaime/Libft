/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:14:38 by paime             #+#    #+#             */
/*   Updated: 2021/11/08 15:28:29 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc(long int n)
{
	unsigned int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				i;
	long int		number;
	int				neg;

	neg = 1;
	number = n;
	i = calc(n) - 1;
	result = ft_calloc(calc(n) + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		number = number * -1;
		neg = -1;
	}
	while (i >= 0)
	{
		result[i] = (number % 10) + '0';
		number = number / 10;
		--i;
	}
	if (neg == -1)
		result[0] = '-';
	return (result);
}
