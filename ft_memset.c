/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:26:59 by paime             #+#    #+#             */
/*   Updated: 2021/11/03 15:01:05 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned long n)
{
	char	*stockstr;
	int		i;

	i = 0;
	stockstr = (char *)str;
	while (n > 0)
	{
		stockstr[i] = c;
		++i;
		n--;
	}
	return (str);
}
