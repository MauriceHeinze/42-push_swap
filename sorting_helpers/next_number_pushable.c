/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_number_pushable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 17:49:43 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	next_number_pushable(long **stack_a, long **stack_b,
	long **stack_helper)
{
	long	last_element_a;
	long	last_element_a_index;
	long	next_bigger_number;
	long	next_bigger_number_index;

	last_element_a = (*stack_a)[ft_stacklen((*stack_a)) - 1];
	last_element_a_index = get_index(&(*stack_helper), last_element_a);
	next_bigger_number = (*stack_helper)[last_element_a_index + 1];
	next_bigger_number_index = get_index(&(*stack_helper), next_bigger_number);
	if ((*stack_b)[0] == next_bigger_number)
	{
		pa(&(*stack_b), &(*stack_a));
		return (1);
	}
	if ((*stack_b)[1] == next_bigger_number)
	{
		sb(&(*stack_b));
		pa(&(*stack_b), &(*stack_a));
		return (1);
	}
	return (0);
}
