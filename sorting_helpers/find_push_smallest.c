/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_push_smallest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_push_smallest(long **stack_a, long **stack_b)
{
	long	smallest_number;
	long	smallest_number_pos;
	long	stack_middle;

	smallest_number_pos = get_smallest(stack_a);
	smallest_number = (*stack_a)[smallest_number_pos];
	stack_middle = ft_stacklen((*stack_a)) / 2;
	if (stack_middle > smallest_number_pos)
	{
		while (smallest_number != (*stack_a)[0])
		{
			ra(&(*stack_a));
		}
	}
	else
	{
		while (smallest_number != (*stack_a)[0])
		{
			rra(&(*stack_a));
		}
	}
	pb(&(*stack_a), &(*stack_b));
}
