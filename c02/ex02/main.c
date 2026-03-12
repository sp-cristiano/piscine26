/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:56:14 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 06:35:09 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(int argc, char **argv)
{
	int	contains_only_alphabet;

	if (argc == 2)
	{
		contains_only_alphabet = ft_str_is_alpha(argv[1]);
		printf("Does it contain only alphabets? %d\n", contains_only_alphabet);
	}
	return (0);
}
