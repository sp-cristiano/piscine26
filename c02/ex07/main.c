/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:06:46 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 08:26:34 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(int argc, char **argv)
{
	char	*transformed_text;

	if (argc > 1)
	{
		printf("Before Transformation: %s\n\n", argv[1]);
		transformed_text = ft_strupcase(argv[1]);
		printf("After Transformation: %s\n", transformed_text);
	}
}
