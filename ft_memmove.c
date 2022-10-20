/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:23:02 by paime             #+#    #+#             */
/*   Updated: 2021/11/04 14:23:04 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned long size)
{
	char			*stockdest;
	char			*stocksrc;
	char			temp[255];
	unsigned long	i;

	i = 0;
	if (!dest && !src)
		return (0);
	stockdest = (char *)dest;
	stocksrc = (char *)src;
	while (i < size)
	{
		temp[i] = stocksrc[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		stockdest[i] = temp[i];
		++i;
	}
	return (dest);
}
