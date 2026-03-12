/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:23:23 by chodili           #+#    #+#             */
/*   Updated: 2026/03/11 11:28:13 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("Hex: %d\n", ft_atoi_base("  --2a", "0123456789abcdef"));
	printf("Bin: %d\n", ft_atoi_base("101010", "01"));
	printf("Invalid: %d\n", ft_atoi_base("10", "aa"));
	return (0);
}
