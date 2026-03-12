/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:05:19 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 13:24:32 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str;

	str = "Bonjour les aminches\t\n\tc est fou\ttout\tce qu "
		"e on peut faire avec\t\n\tprint_memory\n\n\n\tlol.l.o.l";
	ft_print_memory(str, 92);
	return (0);
}
