/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:12:44 by chodili           #+#    #+#             */
/*   Updated: 2026/03/12 11:12:59 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	num;
	int	result;

	num = 5;
	result = ft_iterative_factorial(num);
	printf("factorial of %d = %d\n", num, result);
	return (0);
}
