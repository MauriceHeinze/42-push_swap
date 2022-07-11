/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_duplicates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_has_duplicates(long stack[])
{
	long	i;
	long	j;

	i = 0;
	while (stack[i] != LONG_MAX)
	{
		j = 0;
		while (stack[j] != LONG_MAX)
		{
			if (stack[i] == stack[j + i + 1])
			{
				if (stack[j + i] == 9223372036854775807)
					break ;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
