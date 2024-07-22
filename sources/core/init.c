/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:19:28 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/22 09:58:10 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	n_nums;

	n_nums = ft_lstsize(*stack_a);
	ft_printf("numero de digitos: %d\n", n_nums);
	ft_printf("%p\n", *(stack_b));
	if (!nums_ordered(stack_a))
	{
		if (n_nums == 2)
			sa(stack_a);
		if (n_nums == 3)
			pb(stack_a, stack_b);
	}
}