/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/15 11:02:11 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_stacklen(long stack[])
{
	long	len;

	len = 0;
	while (stack[len] != LONG_MAX)
		len++;
	return (len);
}
