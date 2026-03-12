/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 22:03:47 by chodili           #+#    #+#             */
/*   Updated: 2026/03/06 22:25:54 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		i = ft_strlen(argv[1]);
	}
	else
	{
		i = 0;
	}
	printf("%d \n", i);
	return (0);
}
