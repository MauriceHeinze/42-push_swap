/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/07/10 19:49:20 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_negative_zero(const char *nptr)
{
	if ((nptr[0] == '-') && (nptr[1] == '0'))
		return (1);
	return (0);
}

long	ft_atoi(const char *nptr)
{
	long	i;
	long	number;
	long	sign;

	i = 0;
	number = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + nptr[i] - '0';
		i++;
	}
	if ((nptr[i] != '\0') || is_negative_zero(nptr) || ((nptr[0] == '0')
			&& (nptr[1] != '\0')) || ((nptr[0] == '-') && (nptr[1] == '\0')))
		error_message();
	return ((number * sign));
}
