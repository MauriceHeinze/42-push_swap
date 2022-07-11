/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_group_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 18:47:00 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static long	alloc_mem(long **stack_a_copy, long **stack_b_copy,
	long **steps_needed, long runs)
{
	*stack_a_copy = malloc(sizeof(long) * 640);
	*stack_b_copy = malloc(sizeof(long) * 640);
	*steps_needed = malloc(sizeof(long) * (runs + 1));
	if (!stack_a_copy || !stack_b_copy || !steps_needed)
		return (0);
	return (1);
}

static void	free_mem(long **stack_a_copy, long **stack_b_copy,
	long **steps_needed)
{
	free(*stack_a_copy);
	free(*stack_b_copy);
	free(*steps_needed);
}

static void	copy_both_stacks(long **stack_a, long **stack_b,
		long **stack_a_copy, long **stack_b_copy)
{
	ft_copy_array((*stack_a), (*stack_a_copy), ft_stacklen((*stack_a)));
	ft_copy_array((*stack_b), (*stack_b_copy), ft_stacklen((*stack_b)));
}

long	find_best_group_size(long **stack_a, long **stack_b, long stack_len)
{
	long	*stack_a_copy;
	long	*stack_b_copy;
	long	*steps_needed;
	long	group_size;
	long	runs;

	runs = 35;
	if (runs > stack_len)
		runs = stack_len;
	if (!alloc_mem(&stack_a_copy, &stack_b_copy, &steps_needed, runs))
		return (0);
	group_size = 1;
	steps_needed[runs] = LONG_MAX;
	while (group_size <= stack_len && group_size <= runs)
	{
		ft_counter(0, 1);
		copy_both_stacks(&(*stack_a), &(*stack_b), &stack_a_copy,
			&stack_b_copy);
		sort_stack(&stack_a_copy, &stack_b_copy, group_size);
		steps_needed[group_size - 1] = ft_counter(0, 0);
		group_size++;
	}
	group_size = get_smallest(&steps_needed) + 1;
	free_mem(&stack_a_copy, &stack_b_copy, &steps_needed);
	return (group_size);
}
