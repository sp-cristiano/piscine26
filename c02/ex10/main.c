/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:35:11 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 10:48:28 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			dest[10];
	unsigned int	ret;

	src = "Hello 42 Luanda!";
	ret = ft_strlcpy(dest, src, 10);
	printf("Source %s (Length: %d)\n", src, ret);
	printf("Dest: 	%s\n", dest);
	if (ret >= 10)
	{
		printf("Result was truncated!\n");
	}
	return (0);
}
