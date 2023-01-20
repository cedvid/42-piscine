/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:14:57 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/25 10:37:34 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create an iterated function that returns the value of a power applied to a number.
// Any power lower than 0 returns 0. Overflows must not be handled.
// We’ve decided that 0 power 0 will returns 1
// Allowed functions : None

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
