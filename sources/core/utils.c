/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:51:38 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/25 11:35:53 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nums_ordered(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current && current->next)
	{
		if (*((int *)current->content) > *((int *)current->next->content))
			return (0);
		current = current->next;
	}
	return (1);
}

void	get_index(t_list **stack)
{
	t_list	*current;
	t_list	*temp;
	ssize_t	count;

	current = *stack;
	while (current != NULL)
	{
		count = 0;
		temp = *stack;
		while (temp != NULL)
		{
			if (*(int *)current->content > *(int *)temp->content)
				count++;
			temp = temp->next; 
		}
		current->index = count;
		current = current->next;
	}
}

int	count_index_pos(t_list **stack, int index)
{
	int		counter;
	t_list	*head;

	counter = 1;
	head = *stack;
	while (head != NULL && head->index != index)
	{
		counter++;
		head = head->next;
	}
	return (counter);
}