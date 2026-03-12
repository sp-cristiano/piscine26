/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:04:35 by chodili           #+#    #+#             */
/*   Updated: 2026/03/08 18:18:38 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*new_string;

	if (argc == 3)
	{
		printf("\n\nBefore Copying....\n");
		printf("Source: %s\n", argv[2]);
		printf("Destination: %s\n", argv[1]);
		new_string = ft_strcpy(argv[1], argv[2]);
		printf("\n\nAfter Copying.....\n");
		printf("Source: %s\n", argv[2]);
		printf("Destination: %s\n", new_string);
	}
}
