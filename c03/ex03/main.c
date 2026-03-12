/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 06:44:22 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 08:02:53 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	char			*new_string;
	char			buffer1[100];
	char			buffer2[100];
	unsigned int	low_limit;
	unsigned int	high_limit;

	if (argc == 3)
	{
		strcpy(buffer1, argv[1]);
		strcpy(buffer2, argv[1]);
		printf("Testing where nb is smaller than src\n");
		low_limit = 2;
		new_string = ft_strncat(buffer1, argv[2], low_limit);
		printf("Limit 2: [%s]\n", new_string);
		printf("Testing where nb is larger than src\n");
		high_limit = 20;
		new_string = ft_strncat(buffer2, argv[2], high_limit);
		printf("Limit 20: [%s]\n", new_string);
	}
	return (0);
}
