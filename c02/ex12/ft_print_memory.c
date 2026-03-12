/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:35:43 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 13:17:48 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(unsigned long long n, int digits)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (digits > 1)
		ft_puthex(n / 16, digits -1);
	write(1, &hex[n % 16], 1);
}

void	ft_print_line(unsigned char *ptr, int size)
{
	int	i;

	ft_puthex((unsigned long long)ptr, 16);
	write(1, ": ", 2);
	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_puthex(ptr[i], 2);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (size - i < 16)
			ft_print_line((unsigned char *)addr + i, size - i);
		else
			ft_print_line((unsigned char *)addr + 1, 16);
		i += 16;
	}
	return (addr);
}
