/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 06:26:32 by btan              #+#    #+#             */
/*   Updated: 2023/07/02 06:32:48 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_criteria(int arr[4][4])
{
	int	i;
	int	j;
	char	result;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			result = '0' + arr[i][j];
			write(1, &result, 1);
			write(1, " ", 1);
		}
		result = '0' + arr[i][j];
		write(1, &result, 1);
		write(1, "\n", 1);
	}
}

