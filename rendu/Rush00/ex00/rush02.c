/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 19:11:16 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/03 19:15:57 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ligne_limite1(int largeur)
{
	int i;

	i = 1;
	write(1, "A", 1);
	while (i < largeur - 1)
	{
		write(1, "B", 1);
		i++;
	}
	if (i < largeur)
		write(1, "A", 1);
	write(1, "\n", 1);
}

void	ligne_limite2(int largeur)
{
	int i;

	i = 1;
	write(1, "C", 1);
	while (i < largeur - 1)
	{
		write(1, "B", 1);
		i++;
	}
	if (i < largeur)
		write(1, "C", 1);
	write(1, "\n", 1);
}

void	rush(int largeur, int hauteur)
{
	int j;
	int i;

	if (largeur > 0 && hauteur > 0)
	{
		ligne_limite1(largeur);
		j = 0;
		while (j < hauteur - 2)
		{
			write(1, "B", 1);
			i = 1;
			while (i < largeur - 1)
			{
				write(1, " ", 1);
				i++;
			}
			if (i < largeur)
				write(1, "B", 1);
			write(1, "\n", 1);
			j++;
		}
		if (hauteur > 1)
			ligne_limite2(largeur);
	}
}
