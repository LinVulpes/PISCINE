/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:41:46 by btan              #+#    #+#             */
/*   Updated: 2023/07/01 14:43:17 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_col(char *array)
{
	while (*array)
	{
		putchar(*array);
		putchar(' ');
		array++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_col(argv[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
