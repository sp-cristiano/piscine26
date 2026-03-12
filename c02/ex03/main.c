/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 06:30:51 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 06:42:16 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(int argc, char **argv)
{
	int	contains_only_numbers;

	if (argc > 1)
	{
		contains_only_numbers = ft_str_is_numeric(argv[1]);
		printf("Does it contain only numbers? %d\n", contains_only_numbers);
	}
	return (0);
}
