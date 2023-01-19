/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:05:19 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/20 09:02:04 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function ft_ultimate_div_mod with the following prototype :
// void ft_ultimate_div_mod(int *a, int *b);
// This function divides parameters a by b. The result of this division is stored in the
// int pointed by a. The remainder of the division is stored in the int pointed by b.
// Allowed functions : None

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
