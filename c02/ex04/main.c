/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 06:54:21 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 07:01:28 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(int argc, char **argv)
{
	int	contains_only_lower_case;

	if (argc > 1)
	{
		contains_only_lower_case = ft_str_is_lowercase(argv[1]);
		printf("Contain only lowercase? %d\n", contains_only_lower_case);
	}
	return (0);
}
