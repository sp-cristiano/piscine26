/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 05:04:13 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 05:50:24 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	compare;

	compare = 0;
	if (argc == 3)
	{
		compare = ft_strcmp(argv[1], argv[2]);
		printf("compare: %d\n", compare);
	}
	return (0);
}
