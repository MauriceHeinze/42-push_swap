/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_few_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	handle_few_numbers(long **stack_a)
{
	long	stack_len;

	stack_len = ft_stacklen((*stack_a));
	if ((stack_len == 0) || stack_len == 1)
		return ;
	else if (stack_len == 2)
	{
		if ((*stack_a)[0] > (*stack_a)[1])
		{
			sa(&(*stack_a));
		}
		else
			return ;
	}
	else if (stack_len == 3)
		three_numbers_algo(&(*stack_a));
}
