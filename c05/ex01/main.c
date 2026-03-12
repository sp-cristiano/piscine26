/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:20:40 by chodili           #+#    #+#             */
/*   Updated: 2026/03/12 11:24:35 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	num;

	num = 5;
	printf("Factorial of %d = %d", num, ft_recursive_factorial(num));
	return (0);
}
