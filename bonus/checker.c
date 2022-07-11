/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:31:09 by mheinze           #+#    #+#             */
/*   Updated: 2022/06/21 19:36:37 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

static long	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = (unsigned char)str1[i];
		c2 = (unsigned char)str2[i];
		if (c1 != '\0')
		{
			if (c1 != c2)
				return (c1 - c2);
			i++;
		}
		else
			return (c1 - c2);
	}
	return (0);
}

static long	read_input(int argc, char **argv, long **stack_a)
{
	if (argc == 2)
	{
		if (!ft_fill_array_v2(&(*stack_a), argv))
		{
			write(1, "KO\n", 3);
			return (0);
		}
	}
	else
	{
		if (!ft_fill_array(&(*stack_a), argv, argc))
		{
			write(1, "KO\n", 3);
			return (0);
		}
	}
	return (1);
}

static void	display_result(long **stack_a, long **stack_b)
{
	if (stack_is_sorted(&(*stack_a)) && ft_stacklen((*stack_b)) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

static void	execute_instruction(char *instruction, long **stack_a,
	long **stack_b)
{
	if (ft_strncmp(instruction, "pa\n", 3) == 0)
		pa(&(*stack_b), &(*stack_a));
	else if (ft_strncmp(instruction, "pb\n", 3) == 0)
		pb(&(*stack_a), &(*stack_b));
	else if (ft_strncmp(instruction, "ra\n", 3) == 0)
		ra(&(*stack_a));
	else if (ft_strncmp(instruction, "rb\n", 3) == 0)
		rb(&(*stack_b));
	else if (ft_strncmp(instruction, "rr\n", 3) == 0)
		rr(&(*stack_a), &(*stack_b));
	else if (ft_strncmp(instruction, "rra\n", 4) == 0)
		rra(&(*stack_a));
	else if (ft_strncmp(instruction, "rrb\n", 4) == 0)
		rrb(&(*stack_b));
	else if (ft_strncmp(instruction, "rrr\n", 4) == 0)
		rrr(&(*stack_a), &(*stack_b));
	else if (ft_strncmp(instruction, "sa\n", 3) == 0)
		sa(&(*stack_a));
	else if (ft_strncmp(instruction, "sb\n", 3) == 0)
		sb(&(*stack_b));
	else if (ft_strncmp(instruction, "ss\n", 3) == 0)
		ss(&(*stack_a), &(*stack_b));
}

int	main(int argc, char **argv)
{
	long	group_size;
	long	*stack_a;
	long	*stack_b;
	char	*instruction;

	group_size = 1;
	stack_a = malloc(sizeof(long) * 640);
	stack_b = malloc(sizeof(long) * 640);
	instruction = malloc(sizeof(char) * 5);
	if (!stack_a || !stack_b)
		return (0);
	stack_a[0] = LONG_MAX;
	stack_b[0] = LONG_MAX;
	if (!read_input(argc, argv, &stack_a))
		return (0);
	instruction = get_next_line(0);
	while (instruction)
	{
		execute_instruction(instruction, &stack_a, &stack_b);
		instruction = get_next_line(0);
	}
	display_result(&stack_a, &stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
