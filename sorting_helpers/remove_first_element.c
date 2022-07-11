/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_first_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	remove_first_element(long **stack, long stack_len)
{
	long	first_element;
	int		i;

	first_element = (*stack)[0];
	i = 0;
	while (i < stack_len)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	return (first_element);
}
