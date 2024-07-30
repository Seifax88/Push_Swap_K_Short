/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:46:46 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 11:04:35 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_len(char *nums)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (nums[i] == '+' || nums[i] == '-')
		i++;
	while (nums[i] == '0')
		i++;
	while (nums[i])
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (1);
	return (0);
}

int	check_overflow(char *nums)
{
	if (check_len(nums))
		return (1);
	else if (ft_atoi(nums) != ft_atoll(nums))
		return (1);
	return (0);
}
