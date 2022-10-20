/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:08:40 by paime             #+#    #+#             */
/*   Updated: 2021/11/04 09:40:04 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *src, int c, unsigned long n)
{
	char			*stocksrc;
	unsigned long	i;

	i = 0;
	stocksrc = (char *)src;
	while (i < n)
	{
		if (stocksrc[i] == c)
			return (&stocksrc[i]);
		i++;
	}
	return (0);
}
