/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:09:04 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/31 11:11:12 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(t_list **stack_a)
{
	if (stack_a != NULL)
		ft_lstclear(stack_a, free);
	write(2, "Error\n", 6);
	exit(1);
}

void	*free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

void	check_digits(char **argv, t_list **stack_a)
{
	int	i;
	int	j;
	int	nums;

	i = 1;
	j = 0;
	nums = 0;
	while (argv[i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]))
				nums++;
			j++;
		}
		if (nums == 0)
			print_error(stack_a);
		j = 0;
		i++;
		nums = 0;
	}
}
