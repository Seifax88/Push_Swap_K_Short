/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:59:33 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/25 09:06:53 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include <stdio.h>

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
		ft_printf("contenido de la lista a: %d  y su indice: %d \n",
		 *pt1, (int)stack_a->index);
		stack_a = stack_a->next;
	}
	while (stack_b != NULL)
	{
		pt2 = stack_b->content;
		ft_printf("contenido de la lista b: %d y su indice: %d\n",
		 *pt2, (int)stack_b->index);
		stack_b = stack_b->next;
	}	
	return (0);	
}
