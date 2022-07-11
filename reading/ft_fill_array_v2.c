/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_array_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:28:41 by mheinze           #+#    #+#             */
/*   Updated: 2022/07/10 18:08:08 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	finish_reading(char **nbr, long **stack, long *j)
{
	if (ft_strlen(*nbr))
		(*stack)[(*j)++] = ft_atoi(*nbr);
	(*stack)[(*j)] = 9223372036854775807;
	if (*nbr)
		free(*nbr);
}

static void	add_digit(char **nbr, char **argv, long *k, long *i)
{
	(*nbr)[*k] = argv[1][*i];
	(*k)++;
	(*nbr)[*k] = '\0';
}

static void	add_number(char **nbr, long **stack, long *k, long *j)
{
	if (ft_strlen((*nbr)))
		(*stack)[(*j)++] = ft_atoi((*nbr));
	(*k) = 0;
}

long	ft_fill_array_v2(long **stack, char *argv[])
{
	long	i;
	long	k;
	long	j;
	char	*nbr;

	nbr = malloc((sizeof(char *) * 20));
	if (!nbr)
		return (0);
	i = 0;
	k = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ')
			add_number(&nbr, &(*stack), &k, &j);
		if (!ft_is_char(argv[1][i]) || argv[1][i] == '-')
			add_digit(&nbr, argv, &k, &i);
		if (ft_is_char(argv[1][i]) && argv[1][i] != '-' && argv[1][i] != ' ')
			return (0);
		i++;
	}
	finish_reading(&nbr, &(*stack), &j);
	return (1);
}
