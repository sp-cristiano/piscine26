/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:55:16 by chodili           #+#    #+#             */
/*   Updated: 2026/03/11 09:57:29 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	num;
	int	num2;

	num = 42;
	num2 = -2147483648;
	printf("===== Test 42 as input =====\n");
	ft_putnbr(num);
	printf("\n\n====== Test minimum value as input ======\n");
	ft_putnbr(num2);
	return (0);
}
