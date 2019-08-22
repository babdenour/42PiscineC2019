/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 21:04:38 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/21 21:17:25 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tabs;

	i = 0;
	if (!(tab = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tabs[i] = f(tab[i]);
		i++;
	}
	return (tabs);
}
