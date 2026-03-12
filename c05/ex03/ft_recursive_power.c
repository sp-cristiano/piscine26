/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:07:14 by chodili           #+#    #+#             */
/*   Updated: 2026/03/12 12:21:38 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
