/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:46:21 by cvidot            #+#    #+#             */
/*   Updated: 2022/11/01 11:55:59 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	i = 0;
	k = 0;
	new_str = malloc(sizeof(strs));
	if (size <= 0)
		return ("");
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			new_str[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
			new_str[k++] = *sep;
		i++;
	}
	new_str[k] = '\0';
	return (new_str);
}
