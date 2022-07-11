/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinze <mheinze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:05:26 by mheinze           #+#    #+#             */
/*   Updated: 2022/07/10 18:54:38 by mheinze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

long	ft_strlen(const char *str);
long	ft_counter(int increment, int reset);
long	ft_print(int activate, int change);
long	ft_atoi(const char *nptr);
long	ft_stacklen(long stack[]);
void	ft_print_array(long stack[]);
long	ft_is_char(char c);
long	ft_has_duplicates(long stack[]);
long	ft_has_space(char *argv[]);
long	ft_fill_array_v2(long **stack, char *argv[]);
long	ft_only_ints(long **stack);
long	ft_fill_array(long **stack, char *argv[], int argc);
void	ft_copy_array(long arr[], long copy[], long size);
void	ft_subarr(long **src, long **dst, long index, long size);
void	error_message(void);
long	ft_is_digit(char c);
long	remove_first_element(long **stack, long stack_len);
void	remove_specific_element(long **stack, long stack_len, long index);
void	add_first_element(long **stack, long stack_len, long new_element);
long	swap_stack(long **stack);
void	ss(long **stack_a, long **stack_b);
void	sa(long **stack_a);
void	sb(long **stack_b);
long	rotate_stack(long **stack, long stack_len);
void	rr(long **stack_a, long **stack_b);
void	ra(long **stack_a);
void	rb(long **stack_b);
long	reverse_rotate_stack(long **stack, long stack_len);
void	rrr(long **stack_a, long **stack_b);
void	rra(long **stack_a);
void	rrb(long **stack_b);
long	push_stack(long **stack_a, long **stack_b);
void	pa(long **stack_b, long **stack_a);
void	pb(long **stack_a, long **stack_b);
void	push_swap_to_a(long **stack_a, long **stack_b);
void	push_swap_to_b(long **stack_a, long **stack_b);
void	swap(long *xp, long *yp);
void	sort_ascending(long **stack);
long	get_smallest(long **stack);
long	get_index(long **stack, long number);
long	smallest_is_at_top(long **stack);
long	next_number_pushable(long **stack_a, long **stack_b,
			long **stack_helper);
void	get_smallest_to_top(long **stack_a, long **stack_b,
			long **stack_helper);
void	get_x_to_top(long **stack, long number);
long	get_biggest(long **stack);
long	stack_is_sorted(long **stack);
long	stack_is_sorted_reverse(long **stack);
void	three_numbers_algo(long **stack_a);
void	handle_few_numbers(long **stack_a);
void	find_push_smallest(long **stack_a, long **stack_b);
long	get_min_steps(long **stack, long number);
long	closest_number(long **stack, long **stack_helper, long group_size);
void	sort_stack(long **stack_a, long **stack_b, long group_size);
long	find_best_group_size(long **stack_a, long **stack_b, long stack_len);

#endif
