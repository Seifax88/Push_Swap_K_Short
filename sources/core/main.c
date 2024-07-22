/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:59:33 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/22 10:41:54 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc >= 2)
		parse_init(argv, &stack_a);
	else
		return (0);
	init_push_swap(&stack_a, &stack_b);
	
	
	int	*pt1;
	int *pt2;
	while (stack_a != NULL)
	{
		pt1 = stack_a->content;
		printf("contenido de la lista a: %d \n", *pt1);
		stack_a = stack_a->next;
	}
	while (stack_b != NULL)
	{
		pt2 = stack_b->content;
		printf("contenido de la lista b: %d \n", *pt2);
		stack_b = stack_b->next;
	}	
	return (0);	
}
