/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_steps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	get_min_steps(long **stack, long number)
{
	long	index;
	long	midpoint;
	long	min_steps;

	midpoint = ft_stacklen((*stack)) / 2;
	index = get_index(&(*stack), number);
	if (index < midpoint)
		min_steps = index;
	else
		min_steps = ft_stacklen((*stack)) - index;
	return (min_steps);
}
