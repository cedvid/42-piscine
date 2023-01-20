/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:39:47 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/22 10:17:54 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Create a function that capitalizes the first letter of each word and transforms all
// other letters to lowercase.
// For example:
// salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
// Becomes:
// Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
// Allowed functions : None

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (first == 1)
			{
				str[i] -= 32;
				first = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			first = 0;
		else
			first = 1;
		i++;
	}
	return (str);
}
