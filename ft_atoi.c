/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:26:26 by paime             #+#    #+#             */
/*   Updated: 2021/11/04 14:18:34 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	long int		result;
	int				isneg;

	i = 0;
	result = 0;
	isneg = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		++i;
	if (nptr[i] == '-' && (nptr[i++] >= '0' && nptr[i++] <= '9'))
	{
		isneg = -1;
		++i;
	}
	while (nptr[i] == '+' && (nptr[i++] >= '0' && nptr[i++] <= '9'))
		++i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		++i;
	}
	return (result * isneg);
}