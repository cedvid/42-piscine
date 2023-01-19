/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:20:07 by cvidot            #+#    #+#             */
/*   Updated: 2022/11/02 09:24:36 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function which sorts an array of integers by ascending order.
// The arguments are a pointer to int and the number of ints in the array
// Allowed functions : None

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
