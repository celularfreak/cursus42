/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:46:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/27 21:24:42 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48);
	}
}
