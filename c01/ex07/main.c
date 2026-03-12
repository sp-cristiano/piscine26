/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 00:41:41 by chodili           #+#    #+#             */
/*   Updated: 2026/03/07 01:55:39 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int	my_tab[5];
	int	size;

	my_tab[0] = 1;
	my_tab[1] = 2;
	my_tab[2] = 3;
	my_tab[3] = 4;
	my_tab[4] = 5;
	size = 5;
	i = 0;
	ft_rev_int_tab(my_tab, size);
	while (i < size)
	{
		printf("%d ", my_tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
