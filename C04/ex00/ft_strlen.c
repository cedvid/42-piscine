/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:57:44 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/22 18:59:14 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function that counts and returns the number of characters in a string.
// Allowed functions : None

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
