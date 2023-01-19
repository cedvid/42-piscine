/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:07:45 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/16 18:27:50 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function ft_div_mod prototyped like this :
// void ft_div_mod(int a, int b, int *div, int *mod);
// This function divides parameters a by b and stores the result in the int pointed by
// div. It also stores the remainder of the division of a by b in the int pointed by mod.
// Allowed functions : None

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
