/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	stack_is_sorted(long **stack)
{
	long	i;
	long	len_to_check;

	len_to_check = ft_stacklen((*stack));
	i = 0;
	while (i < len_to_check - 1)
	{
		if ((*stack)[i] > (*stack)[i + 1])
			return (0);
		i++;
	}
	return (1);
}
