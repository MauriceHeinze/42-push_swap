/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 12:00:31 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(long **stack_b)
{
	if (swap_stack(&(*stack_b)))
	{
		ft_counter(1, 0);
		if (ft_print(0, 0))
			write(1, "sb\n", 3);
	}
}
