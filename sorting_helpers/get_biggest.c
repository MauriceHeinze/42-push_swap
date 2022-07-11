/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	get_biggest(long **stack)
{
	long	biggest_number;
	long	biggest_number_pos;
	long	stack_len;
	long	i;

	stack_len = ft_stacklen((*stack));
	biggest_number = (*stack)[0];
	biggest_number_pos = 0;
	i = 0;
	while (i < stack_len)
	{
		if (biggest_number < (*stack)[i])
		{
			biggest_number = (*stack)[i];
			biggest_number_pos = i;
		}
		i++;
	}
	return (biggest_number_pos);
}
