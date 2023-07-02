/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:56:35 by thmu              #+#    #+#             */
/*   Updated: 2023/07/02 16:56:38 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//i for rows and j for columns
//print = print the grid of 4x4.

void	print(int arr[4][4])
{
	int		i;
	int		y;
	char	result;

	i = -1;
	while (++i < 4)
	{
		y = -1;
		while (++y < 3)
		{
			result = arr[i][y] + 48;
			write(1, &result, 1);
			write(1, " ", 1);
		}
		result = arr[i][y] + 48;
		write(1, &result, 1);
		write(1, "\n", 1);
	}
}
