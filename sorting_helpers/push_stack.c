/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	push_stack(long **stack_a, long **stack_b)
{
	long	first_element;

	if (ft_stacklen((*stack_a)) == 0)
		return (0);
	first_element = remove_first_element(stack_a, ft_stacklen((*stack_a)));
	add_first_element(stack_b, ft_stacklen((*stack_b)), first_element);
	return (1);
}
