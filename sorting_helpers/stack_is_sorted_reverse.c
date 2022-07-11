/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted_reverse.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	stack_is_sorted_reverse(long **stack)
{
	long	i;
	long	len_to_check;

	len_to_check = ft_stacklen((*stack)) - 1;
	i = 0;
	while (len_to_check > i)
	{
		if ((*stack)[len_to_check - i] > (*stack)[len_to_check - i - 1])
			return (0);
		i++;
	}
	return (1);
}
