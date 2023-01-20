/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:53:18 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/29 12:25:45 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function that returns the square root of a number (if it exists), or 0 if the
// square root is an irrational number.
// Allowed functions : None

int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		nb = nb - i;
		i += 2;
		count++;
		if (nb == 0)
			return (count);
	}
	return (0);
}
