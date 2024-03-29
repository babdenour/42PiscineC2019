/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:15:55 by abbensou          #+#    #+#             */
/*   Updated: 2019/08/07 19:46:30 by abbensou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
			str[0] = (str[0] - 32);
		{
			if ((str[i] >= ' ' && str[i] <= '/')
					|| (str[i] >= ':' && str[i] <= '@')
					|| (str[i] >= '[' && str[i] <= '`')
					|| (str[i] >= '{' && str[i] <= '~'))
			{
				if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					str[i + 1] = (str[i + 1] - 32);
			}
			i++;
		}
	}
	return (str);
}
