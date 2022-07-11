/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	rotate_stack(long **stack, long stack_len)
{
	long	helper;
	long	first_element;
	int		i;

	if (stack_len < 2)
		return (0);
	first_element = (*stack)[0];
	i = 0;
	while (i < stack_len)
	{
		if (i == stack_len - 1)
		{
			(*stack)[i] = first_element;
			break ;
		}
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	helper = (*stack)[0];
	first_element = (*stack)[stack_len - 1];
	return (1);
}
