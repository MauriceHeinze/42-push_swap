MANDATORY_NAME = push_swap
BONUS_NAME = checker
SOURCES = ./sorting/sort_stack.c\
		./sorting/three_numbers_algo.c\
		./sorting_helpers/closest_number.c\
		./sorting_helpers/find_best_group_size.c\
		./sorting_helpers/find_push_smallest.c\
		./sorting_helpers/get_biggest.c\
		./sorting_helpers/get_index.c\
		./sorting_helpers/get_min_steps.c\
		./sorting_helpers/get_smallest_to_top.c\
		./sorting_helpers/get_smallest.c\
		./sorting_helpers/get_x_to_top.c\
		./sorting_helpers/handle_few_numbers.c\
		./sorting_helpers/next_number_pushable.c\
		./sorting_helpers/push_stack.c\
		./sorting_helpers/push_swap_to_a.c\
		./sorting_helpers/push_swap_to_b.c\
		./sorting_helpers/remove_first_element.c\
		./sorting_helpers/remove_specific_element.c\
		./sorting_helpers/reverse_rotate_stack.c\
		./sorting_helpers/rotate_stack.c\
		./sorting_helpers/smallest_is_at_top.c\
		./sorting_helpers/sort_ascending.c\
		./sorting_helpers/stack_is_sorted_reverse.c\
		./sorting_helpers/stack_is_sorted.c\
		./sorting_helpers/swap_stack.c\
		./sorting_helpers/swap.c\
		./actions/pa.c\
		./actions/pb.c\
		./actions/rr.c\
		./actions/ra.c\
		./actions/rb.c\
		./actions/rrr.c\
		./actions/rra.c\
		./actions/rrb.c\
		./actions/ss.c\
		./actions/sa.c\
		./actions/sb.c\
		./array/add_first_element.c\
		./array/ft_copy_array.c\
		./array/ft_print_array.c\
		./array/ft_stacklen.c\
		./array/ft_strlen.c\
		./array/ft_subarr.c \
		./statics/ft_counter.c\
		./statics/ft_print.c\
		./reading/ft_atoi.c\
		./reading/ft_fill_array_v2.c\
		./reading/ft_fill_array.c\
		./reading/ft_has_duplicates.c\
		./reading/ft_has_space.c\
		./reading/ft_is_char.c\
		./reading/ft_only_ints.c\
		./reading/error_message.c\
		./reading/ft_is_digit.c\

BONUS_SOURCES = ./bonus/checker.c\
		./bonus/get_next_line/get_next_line_utils.c\
		./bonus/get_next_line/get_next_line.c\

PUSH_SWAP = push_swap.c $(SOURCES)
CHECKER = checker.c $(BONUS_SOURCES)

PUSH_SWAP_HEADER = ./includes/push_swap.h $(SOURCES)
BONUS_HEADER = ./bonus/checker.h $(SOURCES)

PUSH_SWAP_OBJ =	$(PUSH_SWAP:.c=.o)
BONUS_OBJ =	$(BONUS:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(MANDATORY_NAME)
$(MANDATORY_NAME): $(PUSH_SWAP_HEADER) $(PUSH_SWAP_OBJ)
	$(CC) $(FLAGS) $(PUSH_SWAP_OBJ) -o $(MANDATORY_NAME)

bonus: $(BONUS_NAME)
$(BONUS_NAME): $(PUSH_SWAP_HEADER) $(PUSH_SWAP_OBJ) $(BONUS_HEADER) $(BONUS_OBJ)
	$(CC) $(FLAGS) $(PUSH_SWAP_OBJ) $(BONUS_OBJ) -o $(BONUS_NAME)

clean:
	$(RM) ./*/*.o
	$(RM) ./*.o
	$(RM) ./*/*.a
	$(RM) ./*/*.h.gch
	$(RM) *.out

fclean: clean
	$(RM) $(MANDATORY_NAME)
	$(RM) $(BONUS_NAME)

re:	fclean all

.PHONY: all clean fclean