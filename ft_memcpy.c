/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:26:53 by paime             #+#    #+#             */
/*   Updated: 2021/11/04 11:42:45 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char			*stockdest;
	char			*stocksrc;
	unsigned long	i;

	if (!dest && !src && n > 0)
		return (0);
	i = 0;
	stockdest = (char *)dest;
	stocksrc = (char *)src;
	while (i < n)
	{
		stockdest[i] = stocksrc[i];
		i++;
	}
	return (dest);
}
