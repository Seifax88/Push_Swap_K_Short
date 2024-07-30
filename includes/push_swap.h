/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:59:12 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 11:24:36 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

////////			Core			////////

int		main(int argc, char **argv);

void	init_push_swap(t_list **stack_a, t_list **stack_b);

int		nums_ordered(t_list **stack);

void	get_index(t_list **stack);

int		count_index_pos(t_list **stack, int index);

////////			Parsing			////////

void	parse_init(char **argv, t_list **stack_a);

void	check_letrs(char **argv, t_list **stack_a);

void	check_digits(char **argv, t_list **stack_a);

void	print_error(t_list **stack_a);

int		nums_are_ok(char **nums);

int		check_overflow(char *nums);

int		check_len(char *nums);

void	parse_split(char **argv, t_list **stack_a);

void	*free_array(char **array);

void	insert_nums(char **nums, t_list **stack_a);

void	check_duplicates(t_list *stack_a);

////////			Moves			////////

void	swap(t_list **stack);

void	sa(t_list **stack_a);

void	sb(t_list **stack_b);

void	ss(t_list **stack_a, t_list **stack_b);

void	push(t_list **frm, t_list **dst);

void	pa(t_list **stack_b, t_list **stack_a);

void	pb(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack);

void	ra(t_list **stack_a);

void	rb(t_list **stack_b);

void	rr(t_list **stack_a, t_list **stack_b);

void	rvs_rotate(t_list **stack);

void	rra(t_list **stack_a);

void	rrb(t_list **stack_b);

void	rrr(t_list **stack_a, t_list **stack_b);

////////			Sorts			////////

void	order_nums(t_list **stack_a, int frs, int sec, int thrd);

void	sort_three(t_list **stack_a);

void	sort_four(t_list **stack_a, t_list **stack_b, int digits);

void	sort_five(t_list **stack_a, t_list **stack_b, int digits);

void	const_sort_to_b(t_list **stack_a, t_list **stack_b, int digits);

int		count_max_rotations(t_list *stack, int max_index);

void	k_sort(t_list **stack_a, t_list **stack_b, int n_nums);

#endif