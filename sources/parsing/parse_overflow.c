/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:46:46 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/12 11:35:02 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// funcion que controle el overflow
	// controlo el tamaño de cada numero dado por el split
void	check_overflow(char *nums)
{
	if (ft_strlen(nums) >= 11)
		print_error();
	else if (ft_atoi(nums) != ft_atoll(nums))
		print_error();
	else
		ft_printf("%s %d\n", nums, ft_atoi(nums));
}