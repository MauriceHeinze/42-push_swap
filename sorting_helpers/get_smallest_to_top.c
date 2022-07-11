/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest_to_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 17:50:34 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_smallest_to_top(long **stack_a, long **stack_b, long **stack_helper)
{
	long	stack_len;

	stack_len = ft_stacklen((*stack_a));
	if (get_smallest(&(*stack_a)) < (stack_len / 2))
	{
		while (get_smallest(&(*stack_a)) != 0)
		{
			if (!next_number_pushable(&(*stack_a), &(*stack_b),
					&(*stack_helper)))
				ra(&(*stack_a));
		}
	}
	else
	{
		while (get_smallest(&(*stack_a)) != 0)
		{
			if (!next_number_pushable(&(*stack_a), &(*stack_b),
					&(*stack_helper)))
				rra(&(*stack_a));
		}
	}
}
