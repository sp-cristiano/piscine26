/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 06:27:03 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 06:33:17 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*new_string;

	if (argc == 3)
	{
		new_string = ft_strcat(argv[1], argv[2]);
		printf("New Concartinated String: %s\n", new_string);
	}
	return (0);
}
