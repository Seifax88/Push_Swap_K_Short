/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:18:34 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 11:23:20 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_nums(t_list **stack_a, int frs, int sec, int thrd)
{
	if ((thrd > sec) && (thrd > frs))
		sa(stack_a);
	if ((sec > thrd) && (sec > frs))
	{
		if (frs > thrd)
			rra(stack_a);
		else
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	if ((frs > sec) && (frs > thrd))
	{
		if (sec > thrd)
		{
			ra(stack_a);
			sa(stack_a);
		}
		else
			ra(stack_a);
	}
}

void	sort_three(t_list **stack_a)
{
	t_list	*head;
	int		frs;
	int		sec;
	int		thrd;

	head = *stack_a;
	frs = *(int *)head->content;
	sec = *(int *)head->next->content;
	thrd = *(int *)head->next->next->content;
	order_nums(stack_a, frs, sec, thrd);
}
