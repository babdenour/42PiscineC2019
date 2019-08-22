/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:33:53 by oroberts          #+#    #+#             */
/*   Updated: 2019/08/04 00:41:45 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ligne_limite1(int a);

void	ligne_limite2(int a);

void	rush(int a, int b);

int		main(void)
{
	rush(4, 4);
	printf("\n----------\n");
	rush(0, 0);
	printf("\n----------\n");
	rush(1, 1);
	printf("\n----------\n");
	rush(1, 5);
	printf("\n----------\n");
	rush(5, 1);
	printf("\n----------\n");
	rush(5, 5);
	printf("\n----------\n");
	rush(2, 1);
	printf("\n----------\n");
	rush(2, 2);
	printf("\n----------\n");
	rush(100, 100);
	return (0);
}
