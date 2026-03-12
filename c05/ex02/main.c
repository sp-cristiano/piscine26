/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:47:08 by chodili           #+#    #+#             */
/*   Updated: 2026/03/12 12:28:04 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 5;
	power = 5;
	while (power >= -2 || nb >= -1)
	{
		result = ft_iterative_power(nb, power);
		printf("result of %d to the power of %d = %d\n", nb, power, result);
		power--;
		nb--;
	}
	return (0);
}
