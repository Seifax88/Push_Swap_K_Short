/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:36:32 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/26 11:09:11 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b, int digits)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0)
		{
			if (count_index_pos(stack_a, 0) <= (digits / 2))
				ra(stack_a);
			else
				rra(stack_a);
		}
		if ((*stack_a)->index == 0)
			pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	pa(stack_b, stack_a);
}
