/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:43:40 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/16 12:34:41 by dgargant         ###   ########.fr       */
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
		while (argv[i][j] != '\0')
		{
			if ( !(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
				&& (argv[i][j] != '-') && (argv[i][j] != '+'))
				print_error();
			j++;
		} 
		j = 0;
		i++;
	}
}

int	nums_are_ok(char **nums)
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
				return (1);
			j++;
		}
		j = 0;
		if (check_overflow(nums[i]))
			return (1);
		i++;
	}
	return (0);
}

void	insert_nums(char **nums, t_list **stack_a)
{
	int		i;
	int		*num;
	t_list	*node;

	i = 0;
	while (nums[i] != NULL)
	{
		num = malloc(sizeof(int));
		*num = ft_atoi(nums[i]);
		node = ft_lstnew(num);
		if (!node)
		{
			ft_lstclear(stack_a, free);
			free_array(nums);
			free(nums);
			print_error();
		}
		ft_lstadd_back(stack_a, node);
		i++;
	}
}

void	parse_split(char **argv, t_list **stack_a)
{
	int 	i;
	char 	**nums;

	i = 1;
	nums = NULL;
	while (argv[i] != NULL)
	{
		nums = ft_split(argv[i], ' ');
		if (nums_are_ok(nums))
		{
			free_array(nums);
			print_error();
		}
		else
		{
			insert_nums(nums, stack_a);
			free_array(nums);
		}
		i++;
	}
}

void	parse_init(char **argv, t_list **stack_a)
{
	check_letrs(argv);
	parse_split(argv, stack_a);
	check_duplicates(*stack_a);
}
