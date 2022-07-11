/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	get_smallest(long **stack)
{
	long	smallest_number;
	long	smallest_number_pos;
	long	stack_len;
	long	i;

	stack_len = ft_stacklen((*stack));
	smallest_number = (*stack)[0];
	smallest_number_pos = 0;
	i = 0;
	while (i < stack_len)
	{
		if (smallest_number > (*stack)[i])
		{
			smallest_number = (*stack)[i];
			smallest_number_pos = i;
		}
		i++;
	}
	return (smallest_number_pos);
}
