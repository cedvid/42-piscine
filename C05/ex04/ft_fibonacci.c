/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:21:31 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/25 12:00:40 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function ft_fibonacci that returns the n-th element of the Fibonacci
// sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
// sequence starts like this: 0, 1, 1, 2.
// Overflows must not be handled, the function return will be undefined.
// Obviously, ft_fibonacci has to be recursive.
// If the index is less than 0, the function should return -1.
// Allowed functions : None

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
