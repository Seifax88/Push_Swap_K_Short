/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:59:12 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:58 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

int	main(int argc, char **argv);

void	parse_init(char **argv, t_list **stack_a);

void	check_letrs(char **argv);

void	print_error();

int	nums_are_ok(char **nums);

int	check_overflow(char *nums);

void	parse_split(char **argv, t_list **stack_a);

void	*free_array(char **array);

void	insert_nums(char **nums, t_list **stack_a);

#endif