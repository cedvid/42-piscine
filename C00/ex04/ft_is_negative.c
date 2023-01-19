/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:24:37 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/17 09:39:11 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
// as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
// Allowed functions: write

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
	}
	else if (n >= 0)
	{
		result = 'P';
	}
	write(1, &result, 1);
}
