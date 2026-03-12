/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 05:40:42 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 06:17:45 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	int				compare;
	unsigned int	n;

	compare = 0;
	n = 5;
	if (argc >= 3)
	{
		compare = ft_strncmp(argv[1], argv[2], n);
		printf("Compare: %d\n", compare);
	}
	return (0);
}
