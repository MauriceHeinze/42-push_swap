/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	reverse_rotate_stack(long **stack, long stack_len)
{
	long	helper;
	long	last_element;
	int		i;

	if (stack_len < 2)
		return (0);
	last_element = (*stack)[stack_len - 1];
	i = 0;
	while (i < stack_len)
	{
		if (i - stack_len + 1 == 0)
			(*stack)[0] = last_element;
		else
			(*stack)[stack_len - 1 - i] = (*stack)[stack_len - 1 - i - 1];
		i++;
	}
	helper = (*stack)[0];
	last_element = (*stack)[stack_len - 1];
	return (1);
}
