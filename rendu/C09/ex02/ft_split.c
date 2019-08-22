/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <abbensou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:05:00 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/21 17:07:23 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ischarcet(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && (ischarcet(*str, charset) == 1))
			str++;
		if (*str && (ischarcet(*str, charset) != 1))
		{
			count++;
			while (*str && ischarcet(*str, charset) != 1)
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && (ischarcet(str[i], charset) != 1))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*str && (ischarcet(*str, charset) != 1))
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		y;

	i = 0;
	y = count_word(str, charset);
	if (!(tab = (char **)malloc(sizeof(char*) * (y + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && (ischarcet(*str, charset) == 1))
			str++;
		if (*str && (ischarcet(*str, charset) != 1))
		{
			tab[i] = malloc_word(str, charset);
			i++;
			while (*str && (ischarcet(*str, charset) != 1))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}
