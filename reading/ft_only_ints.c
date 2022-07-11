/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_ints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_only_ints(long **stack)
{
	int	stacklen;
	int	i;

	i = 0;
	stacklen = ft_stacklen((*stack));
	while (i < stacklen)
	{
		if ((*stack)[i] < -2147483648 || (*stack)[i] > 2147483647)
			return (0);
	i++;
	}
	return (1);
}
