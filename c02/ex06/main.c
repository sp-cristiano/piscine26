/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 07:40:00 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 07:48:17 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(int argc, char **argv)
{
	int	is_printable;

	if (argc > 1)
	{
		is_printable = ft_str_is_printable(argv[1]);
		printf("Is the character printable? %d\n", is_printable);
	}
	return (0);
}
