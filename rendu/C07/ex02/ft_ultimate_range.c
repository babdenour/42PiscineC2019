/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 00:15:41 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/19 00:17:20 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = max - min;
	(j < 0) ? (j = j * -1) : j
	if (!(tab = (int *)malloc(sizeof(*tab) * j)))
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	*range = tab;
	return (j);
}
