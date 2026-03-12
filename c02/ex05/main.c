/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 06:54:21 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 07:15:27 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(int argc, char **argv)
{
	int	contains_only_upper_case;

	if (argc > 1)
	{
		contains_only_upper_case = ft_str_is_uppercase(argv[1]);
		printf("Contain only uppercase? %d\n", contains_only_upper_case);
	}
	return (0);
}
