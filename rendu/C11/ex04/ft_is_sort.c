/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 23:52:17 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/22 00:29:04 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (cnt < length)
	{
		while (tab[i] > tab[i + 1])
		{
			if (tab[i] < tab[i + 1])
				f(tab) = -1;
			if (tab[i] == tab[i + 1])
				f(tab) = 0;
			else
				f(tab) = 1;
			i++;
		}
		return (1);
		cnt++;
	}
	return (0);
}
