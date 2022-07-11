/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers_algo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:59:40 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:12 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	three_numbers_algo(long **stack_a)
{
	long	smallest;
	long	biggest;

	smallest = (*stack_a)[get_smallest(&(*stack_a))];
	biggest = (*stack_a)[get_biggest(&(*stack_a))];
	if ((*stack_a)[0] == biggest && (*stack_a)[2] == smallest)
	{
		sa(&(*stack_a));
		rra(&(*stack_a));
		return ;
	}
	else if ((*stack_a)[0] == smallest && (*stack_a)[1] == biggest)
	{
		sa(&(*stack_a));
		ra(&(*stack_a));
		return ;
	}
	else if ((*stack_a)[1] == smallest && (*stack_a)[2] == biggest)
		sa(&(*stack_a));
	else if ((*stack_a)[0] == biggest && (*stack_a)[1] == smallest)
		ra(&(*stack_a));
	else if ((*stack_a)[1] == biggest && (*stack_a)[2] == smallest)
		rra(&(*stack_a));
}
