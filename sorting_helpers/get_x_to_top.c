/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_x_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_x_to_top(long **stack, long number)
{
	long	stack_len;

	stack_len = ft_stacklen((*stack));
	if (number != LONG_MAX)
	{
		if (get_index(&(*stack), number) < (stack_len / 2))
			while (get_index(&(*stack), number) > 0)
				ra(&(*stack));
		else
			while (get_index(&(*stack), number) > 0)
				rra(&(*stack));
	}
}
