/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:17 by thmu              #+#    #+#             */
/*   Updated: 2023/07/08 20:13:45 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!(result))
		return (-1);
	while (max > min)
	{
		result[i] = min;
		min ++;
		i++;
	}
	*range = result;
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	*range;
	int	i;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Memory allocation erro. \n");
		return (1);
	}
	else if (size == 0)
	{
		printf("Invalid range.\n");
		return (1);
	}
	printf("Range: min: %d, max: %d\n", min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i ++;
	}
	free (range);
	return (0);
}*/
