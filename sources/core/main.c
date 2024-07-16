/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:59:33 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/16 10:26:34 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list *stack_a;
	//t_list *stack_b;

	stack_a = NULL;
	//stack_b = NULL;
	if (argc >= 2)
	{
		parse_init(argv, &stack_a);	
	}
	else
		return (0);

	int	*pt1;

	while (stack_a != NULL)
	{
		pt1 = stack_a->content;
		printf("contenido de la lista: %d \n", *pt1);
		stack_a = stack_a->next;
	}
	return (0);	
}
