/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:13:02 by dgargant          #+#    #+#             */
/*   Updated: 2024/07/30 10:57:11 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *str)
{
	size_t		i;
	int			neg;
	long long	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - 48);
		if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			return (nb * neg);
		i++;
	}
	return (1);
}
