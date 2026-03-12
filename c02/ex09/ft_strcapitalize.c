/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:18:30 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 09:57:09 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @param *str : Character pointer parameter
 * @function char	*ft_strlowcase(char *str) : Converts character pointer
 * to lowercase.
 * @return : return (str)
 */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/**
 * @param *str : Character pointer parameter
 * @function char	*ft_strcapitalize(char *str) : Converts character
 * pointer of every first word of string to capital letter.
 * @return : return (str)
 */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z' )
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
