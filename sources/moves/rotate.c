/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:47:46 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/22 13:01:36 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		last = ft_lstlast(*stack);
		last->next = first;
		first->next = NULL;
		*stack = second;		
	}
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra");
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_printf("rb");	
}