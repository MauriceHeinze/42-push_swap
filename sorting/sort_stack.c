/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_mem(long **stack_helper, long **group_helper)
{
	free(*stack_helper);
	free(*group_helper);
}

static long	setup_helpers(long **stack_a, long **stack_helper,
	long **group_helper)
{
	*stack_helper = malloc(sizeof(long) * 640);
	*group_helper = malloc(sizeof(long) * 640);
	if (!stack_helper || !group_helper)
		return (0);
	(*stack_helper)[0] = LONG_MAX;
	(*group_helper)[0] = LONG_MAX;
	ft_copy_array((*stack_a), (*stack_helper), ft_stacklen((*stack_a)));
	sort_ascending(&(*stack_helper));
	return (1);
}

void	push_back_to_b(long **stack_a, long **stack_b, long **stack_helper)
{
	while (ft_stacklen((*stack_b)) > 0)
	{
		if ((*stack_b)[0] < (*stack_b)[1])
			sb(&(*stack_b));
		if ((*stack_b)[0] > (*stack_a)[get_biggest(&(*stack_a))])
		{
			pa(&(*stack_b), &(*stack_a));
			ra(&(*stack_a));
		}
		else if (((*stack_a)[1] > (*stack_b)[0]) && ((*stack_a)[0]
				< (*stack_b)[0]))
			push_swap_to_a(&(*stack_a), &(*stack_b));
		else if ((*stack_b)[0] < (*stack_a)[get_biggest(&(*stack_a))])
		{
			while ((*stack_b)[0] > (*stack_a)[0])
				ra(&(*stack_a));
			pa(&(*stack_b), &(*stack_a));
			get_smallest_to_top(&(*stack_a), &(*stack_b), &(*stack_helper));
		}
	}
}

void	push_to_a(long **stack_a, long **stack_b, long **group_helper)
{
	long	closest;

	closest = closest_number(&(*stack_a), &(*group_helper),
			ft_stacklen((*group_helper)));
	remove_specific_element(&(*group_helper), ft_stacklen((*group_helper)),
		get_index(&(*group_helper), closest));
	get_x_to_top(&(*stack_a), closest);
	pb(&(*stack_a), &(*stack_b));
}

void	sort_stack(long **stack_a, long **stack_b, long group_size)
{
	long	*stack_helper;
	long	*group_helper;
	long	i;
	long	run;
	long	needed_runs;

	setup_helpers(&(*stack_a), &stack_helper, &group_helper);
	run = 0;
	needed_runs = ((ft_stacklen((*stack_a)) / group_size) + 1);
	while (run < needed_runs && (ft_stacklen((*stack_a)) > 3)
		&& !stack_is_sorted(&(*stack_a)))
	{
		i = 0;
		ft_subarr(&stack_helper, &group_helper, group_size * run, group_size);
		while (i < group_size && (ft_stacklen((*stack_a)) > 3))
		{
			push_to_a(&(*stack_a), &(*stack_b), &group_helper);
			i++;
		}
		run++;
	}
	three_numbers_algo(&(*stack_a));
	push_back_to_b(&(*stack_a), &(*stack_b), &stack_helper);
	free_mem(&stack_helper, &group_helper);
}
