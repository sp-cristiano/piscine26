/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chodili <chodili@student.42luanda.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:08:52 by chodili           #+#    #+#             */
/*   Updated: 2026/03/09 09:14:05 by chodili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(int argc, char **argv)
{
	char	*transformed_text;

	if (argc > 1)
	{
		printf("Before Transformation: %s\n\n", argv[1]);
		transformed_text = ft_strlowcase(argv[1]);
		printf("After Transformation: %s\n", transformed_text);
	}
}
