/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 22:14:07 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/15 11:37:06 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	i;
	long	j;

	i = 0;
	j = min;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc((sizeof(int)) * (max - min))))
		return (0);
	while (j < max)
	{
		tab[i] = j;
		j++;
		i++;
	}
	return (tab);
}
