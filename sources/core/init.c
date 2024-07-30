/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:19:28 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 10:59:22 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	n_nums;

	n_nums = ft_lstsize(*stack_a);
	get_index(stack_a);
	if (!nums_ordered(stack_a))
	{
		if (n_nums == 2)
			sa(stack_a);
		else if (n_nums == 3)
			sort_three(stack_a);
		else if (n_nums == 4)
			sort_four(stack_a, stack_b, n_nums);
		else if (n_nums == 5)
			sort_five(stack_a, stack_b, n_nums);
		else
			k_sort(stack_a, stack_b, n_nums);
	}
}
