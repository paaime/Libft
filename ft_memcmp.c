/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paime <paime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:21 by paime             #+#    #+#             */
/*   Updated: 2021/11/05 13:37:18 by paime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp( const void *pointer1, const void *pointer2, unsigned int size)
{
    unsigned int    i;
    unsigned char   *p1;
    unsigned char   *p2;
    i = 0;
    p1 = (unsigned char *)pointer1;
    p2 = (unsigned char *)pointer2;
    while ((p1[i] == p2[i]) && (i < size - 1))
        i++;
    return (p1[i] - p2[i]);
}
