/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:41:33 by cvidot            #+#    #+#             */
/*   Updated: 2022/11/01 11:20:24 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

// Create a function ft_ultimate_range which allocates and assigns an array of ints.
// This int array should contain all values between min and max.
// Min included - max excluded.
// The size of range should be returned (or -1 on error).
// If the value of min is greater or equal to max’s value, range will point on NULL
// and it should return 0.
// Allowed functions : malloc

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!res)
	{	
		*range = NULL;
		return (-1);
	}
	while (i < (max - min))
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (i);
}
