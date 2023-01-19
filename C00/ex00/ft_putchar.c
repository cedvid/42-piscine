/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:35:56 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/17 08:39:07 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//Write a function that displays the character passed as a parameter.
//Allowed functions: write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
