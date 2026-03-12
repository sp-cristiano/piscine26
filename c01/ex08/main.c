/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:06:31 by chodili           #+#    #+#             */
/*   Updated: 2026/03/08 17:25:20 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	num[] = {10, 2, 5, 1, 6};
	int	i;

	i = 0;
	ft_sort_int_tab(num, 5);
	while (i < 5)
	{
		printf("%d ", num[i]);
		i++;
	}
	return (0);
}
