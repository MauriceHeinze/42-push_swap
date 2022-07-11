/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_first_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 17:51:09 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_first_element(long **stack, long stack_len, long new_element)
{
	int	i;
	int	current_pos;

	current_pos = 0;
	i = 1;
	if (stack_len > 0)
		current_pos = stack_len - 1;
	else
		current_pos = 0;
	while ((stack_len > 0) && (current_pos >= 0))
	{
		(*stack)[current_pos + 1] = (*stack)[current_pos];
		current_pos--;
		i++;
	}
	(*stack)[0] = new_element;
	(*stack)[i] = LONG_MAX;
}
