/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:51:24 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/29 11:54:14 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_vars *master)
{
	int	i;

	i = 0;
	if (master->stack_a[0] == master->min)
		pb(master);
	/*if (master->stack_a[0] > master->stack_a[1] && master->stack_a[1] < master->stack_a[2] && master->stack_a[1] < master->stack_a[3])
		{
			sa(master);
			pb(master);
		}
	sort_three(master);
	pa(master);*/
}
