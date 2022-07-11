/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/20 18:35:22 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_fill_array(long **stack, char *argv[], int argc)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_is_char(*argv[i]) && argv[i][0] != '-')
			return (0);
		(*stack)[i - 1] = ft_atoi(argv[i]);
	}
	if (argc == 1)
		return (0);
	(*stack)[i - 1] = LONG_MAX;
	if (!ft_only_ints(&(*stack)))
		return (0);
	if (ft_has_duplicates((*stack)))
		return (0);
	return (1);
}
