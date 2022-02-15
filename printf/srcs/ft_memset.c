/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:34:19 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 11:48:26 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((unsigned char *)s)[cont] = (unsigned char)c;
		cont++;
	}
	return (s);
}
