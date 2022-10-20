/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:53:12 by paime             #+#    #+#             */
/*   Updated: 2021/11/04 11:36:31 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void			*mem;
	char			*memstock;
	unsigned int	i;

	i = 0;
	mem = NULL;
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	memstock = (char *)mem;
	while (i < (size * nmemb))
	{
		memstock[i] = '\0';
		++i;
	}
	return (mem);
}
