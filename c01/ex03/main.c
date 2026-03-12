/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:20:28 by chodili           #+#    #+#             */
/*   Updated: 2026/03/05 12:55:39 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 300;
	b = 100;
	ft_div_mod(a, b, &div, &mod);
	printf("div = a / b = %d / %d = %d \n", a, b, div);
	printf("mod = a %% b = %d %% %d = %d \n", a, b, mod);
	return (0);
}
