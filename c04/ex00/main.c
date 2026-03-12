/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:35:46 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 10:41:30 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	str_len;

	if (argc > 1)
	{
		str_len = ft_strlen(argv[1]);
		printf("Length of string: %d", str_len);
	}
	return (0);
}
