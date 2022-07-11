/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:01:30 by mheinze           #+#    #+#             */
/*   Updated: 2022/07/10 19:46:53 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static long	read_input(int argc, char **argv, long **stack_a)
{
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		if (!ft_fill_array_v2(&(*stack_a), argv))
			error_message();
		if (!ft_only_ints(&(*stack_a)) || ft_has_duplicates((*stack_a)))
			error_message();
	}
	else
	{
		if (!ft_fill_array(&(*stack_a), argv, argc))
			error_message();
	}
	if (ft_stacklen((*stack_a)) == 0)
		error_message();
	return (1);
}

int	main(int argc, char **argv)
{
	long	group_size;
	long	*stack_a;
	long	*stack_b;

	group_size = 1;
	stack_a = malloc(sizeof(long) * 640);
	stack_b = malloc(sizeof(long) * 640);
	if (!stack_a || !stack_b)
		return (0);
	stack_a[0] = LONG_MAX;
	stack_b[0] = LONG_MAX;
	if (!read_input(argc, argv, &stack_a))
		return (0);
	group_size = find_best_group_size(&stack_a, &stack_b, ft_stacklen(stack_a));
	ft_counter(0, 1);
	ft_print(1, 1);
	sort_stack(&stack_a, &stack_b, group_size);
	free(stack_a);
	free(stack_b);
	return (0);
}
