/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:42:59 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 10:01:24 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[20];
	char			*src;
	unsigned int	result;
	unsigned int	size;

	strcpy(dest, "Hello");
	src = " Luanda";
	size = 20;
	printf("--- ft_strlcat Test ---\n");
	printf("Dest before: [%s]\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("Dest after:  [%s]\n", dest);
	printf("Return Value: %u\n", result);
	printf("Expected Return: %lu\n", strlen("Hello") + strlen(" Luanda"));
	return (0);
}
