/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:57:38 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 10:02:55 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(int argc, char **argv)
{
	char	*transformed_text;

	if (argc > 1)
	{
		printf("Before Transformation: %s\n\n", argv[1]);
		transformed_text = ft_strcapitalize(argv[1]);
		printf("After Transformation: %s\n", transformed_text);
	}
	return (0);
}
