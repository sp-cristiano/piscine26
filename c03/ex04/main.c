/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:02:21 by chodili           #+#    #+#             */
/*   Updated: 2026/03/10 09:14:42 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find1;
	char	*to_find2;
	char	*to_find3;
	char	*to_find4;

	str = "42 Luanda is the best campus";
	to_find1 = "Luanda";
	to_find2 = "campus";
	to_find3 = "Lagos";
	to_find4 = "";
	printf("====== ft_strstr Test =====\n\n");
	printf("To find: [Luanda]; Found: [%s]\n", ft_strstr(str, to_find1));
	printf("To find: [campus]; Found: [%s]\n", ft_strstr(str, to_find2));
	printf("To find: [Lagos]; Found: [%s]\n", ft_strstr(str, to_find3));
	printf("To find: [""]; Found: [%s]\n", ft_strstr(str, to_find4));
	return (0);
}
