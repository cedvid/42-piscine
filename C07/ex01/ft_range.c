/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:23:52 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/31 09:09:51 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

// Create a function ft_range which returns an array ofints. This int array should
// contain all values between min and max.
// Min included - max excluded.
// If min´value is greater or equal to max’s value, a null pointer should be returned.
// Allowed functions : malloc

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	result = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
