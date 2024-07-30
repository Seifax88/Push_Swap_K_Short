/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:48:30 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 11:01:05 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rvs_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		first = *stack;
		while (first->next->next != NULL)
			first = first->next;
		last = first->next;
		first->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

void	rra(t_list **stack_a)
{
	rvs_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	rvs_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rvs_rotate(stack_a);
	rvs_rotate(stack_b);
	ft_printf("rrr\n");
}
