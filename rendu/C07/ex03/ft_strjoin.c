/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:50:38 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/18 23:52:44 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		c = (char)src[j];
		dest[i + j] = c;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_lensize(char **src, int size, int sep)
{
	int		i;
	int		i2;
	int		count;
	char	*str;

	count = 0;
	i2 = 0;
	while (i2 < size)
	{
		str = src[i2];
		i = 0;
		while (str[i] != '\0')
			i++;
		count = count + i;
		i2++;
	}
	count = count + sep * (i2 - 1);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*dest;

	if (size <= 0)
		return (NULL);
	count = ft_lensize(strs, size, (ft_strlen(sep)));
	if (!(dest = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	dest[0] = '\0';
	count = 1;
	dest = ft_strcat(dest, strs[count - 1]);
	while (count < size)
	{
		dest = ft_strcat(dest, sep);
		dest = ft_strcat(dest, strs[count]);
		count++;
	}
	return (dest);
}
