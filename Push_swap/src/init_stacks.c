/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:23:21 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/04 10:38:47 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	init_stacks(t_vars *master, int argc, char **argv)
{
	int		i;
	int		temp;
	int		size;

	i = 0;
	size = argc - 1;
	master->stack_a_size = size;
	master->stack_b_size = size;
	master->stack_t_size = size;
	master->min = 1;
	master->max = size;
	temp = master->stack_t_size;
	master->stack_a = ft_calloc((master->stack_a_size), sizeof(int));
	master->stack_b = ft_calloc((master->stack_b_size), sizeof(int));
	master->temp_stack = ft_calloc((master->stack_t_size), sizeof(int));
	if (!master->stack_a || !master->stack_b || !master->temp_stack)
		exit(0);
	while (temp > 0)
	{
		master->temp_stack[i] = ft_atoi(argv[i + 1]);
		temp--;
		i++;
	}
}