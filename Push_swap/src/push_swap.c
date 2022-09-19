/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/19 09:01:58 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"


int	main(int argc, char **argv)
{
	t_vars	master;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 1)
		return (0);
	master.stack1 = ft_calloc((argc - 1), sizeof(int));
	master.stack2 = (int *)malloc(sizeof(int) * (argc - 1));
	master.tempstack = (int *)malloc(sizeof(int) * (argc - 1));
	if (!master.stack1 || !master.stack2 || !master.tempstack)
		return (0);
	while (argc > 1)
	{
		master.stack1[i] = ft_atoi(argv[i + 1]);
		argc--;
		i++;
	}
	while (master.stack1[j] != '\0')
	{
		ft_putnbr_fd(master.stack1[j], 1);
		j++;
	}
	return (0);
}
