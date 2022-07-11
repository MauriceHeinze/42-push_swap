/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closest_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 18:16:38 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static long	handle_small_stack(long **stack, long **stack_helper)
{
	long	closest_number;
	long	next_number;
	long	stack_len;

	stack_len = ft_stacklen((*stack_helper));
	closest_number = get_min_steps(&(*stack), (*stack_helper)[0]);
	next_number = get_min_steps(&(*stack), (*stack_helper)[1]);
	if (stack_len == 1)
		return ((*stack_helper)[0]);
	else if (stack_len == 2)
	{
		if (closest_number < next_number)
			return ((*stack_helper)[0]);
		else
			return ((*stack_helper)[1]);
	}
	return (10);
}

long	closest_number(long **stack, long **stack_helper, long group_size)
{
	long	i;
	long	closest_number;
	long	next_number;

	if (ft_stacklen((*stack_helper)) < 3)
		return (handle_small_stack(&(*stack), &(*stack_helper)));
	i = 0;
	closest_number = (*stack_helper)[0];
	next_number = (*stack_helper)[1];
	while (i <= group_size)
	{
		if (get_min_steps(&(*stack), next_number)
			< get_min_steps(&(*stack), closest_number))
			closest_number = next_number;
		next_number = (*stack_helper)[i];
		i++;
	}
	return (closest_number);
}
