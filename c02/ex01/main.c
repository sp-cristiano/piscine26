/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:38:38 by chodili           #+#    #+#             */
/*   Updated: 2026/03/08 22:49:27 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int argc, char **argv)
{
	char			*new_string;
	unsigned int	n;

	if (argc == 3)
	{
		n = 10;
		printf("\n\nBefore Copying...\n");
		printf("Source: %s \n", argv[2]);
		printf("Destination: %s\n", argv[1]);
		new_string = ft_strncpy(argv[1], argv[2], n);
		printf("\n\nAfter copying.......\n");
		printf("Source: %s\n", argv[2]);
		printf("Destination: %s\n", new_string);
	}
	return (0);
}
