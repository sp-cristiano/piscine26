/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:22:02 by chodili           #+#    #+#             */
/*   Updated: 2026/03/12 12:26:51 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 5;
	power = 5;
	while (power >= -2 || nb >= -1)
	{
		result = ft_recursive_power(nb, power);
		printf("Result of %d to the power of %d = %d\n", nb, power, result);
		power--;
		nb--;
	}
	return (0);
}
