/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:46:53 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/22 10:02:43 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **frm, t_list **dst)
{
	t_list	*tmp;
	//comprobar esta funcion :)
	if (*frm != NULL)
	{
		tmp = *frm;
		*frm = (*frm)->next;
		tmp->next = *dst;
		*dst = tmp;
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}