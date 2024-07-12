/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:43:40 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/12 11:36:00 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	check_letrs(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i] != NULL)
	{
		//ft_printf("%s \n", argv[i]);
		while (argv[i][j] != '\0')
		{
			//ft_printf("%c %d \n", argv[i][j], i);
			if ( !(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
				&& (argv[i][j] != '-') && (argv[i][j] != '+'))
				print_error();
			j++;
		} 
		j = 0;
		i++;
	}
}

// funcion que pase atoi y atoll a cada puntero del split
	// comprobar si el numero tiene un signo despues
	// si atoi y atoll devuelven algo distinto devolvera error
	// hacer atoll (debe devolver 1 para la comparacion con atoi)

void	nums_are_ok(char **nums)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (nums[i] != NULL)
	{
		while (nums[i][j] != '\0')
		{
			if (!(ft_isdigit(nums[i][j + 1])) && (nums[i][j + 1] != '\0'))
				print_error();
			j++;
		}
		j = 0;
		check_overflow(nums[i]);
		i++;
	}
	
}

void	parse_split(char **argv)
{
	int 	i;
	char 	**nums;

	i = 1;
	nums = NULL;
	while (argv[i] != NULL)
	{
		nums = ft_split(argv[i], ' ');
		nums_are_ok(nums);
		i++;
	}
}

void	parse_init(char **argv)
{
	check_letrs(argv);
	parse_split(argv);
}
