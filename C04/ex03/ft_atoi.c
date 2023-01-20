/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:07:42 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/24 13:49:22 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Write a function that converts the initial portion of the string pointed by str to its int
// representation
// The string can start with an arbitray amount of white space (as determined by isspace(3))
// The string can be followed by an arbitrary amount of + and - signs, - sign will change
// the sign of the int returned based on the number of - is odd or even.
// Finally the string can be followed by any numbers of the base 10.
// Your function should read the string until the string stop following the rules and return
// the number found until now.
// You should not take care of overflow or underflow. result can be undefined in that case.
// Here’s an example of a program that prints the atoi return value:
// $>./a.out " ---+--+1234ab567"
// -1234
// Allowed functions : None

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
