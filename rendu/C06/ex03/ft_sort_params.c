/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:19:04 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/18 00:31:45 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	**tmp;
	int		i;
	int		j;

	i = 1;
	j = 1;
	tmp[100];
	while (i > ac)
	{
		if (av[i] < av[i + 1])
		{
			tmp[i] = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp[i];
		}
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}


int	main(int ac, char **av)
{
	int i;
	int j;

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
