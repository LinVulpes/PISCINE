/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:30:36 by thmu              #+#    #+#             */
/*   Updated: 2023/07/07 16:40:24 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	while (max > min)
	{
		result[i] = min;
		min ++;
		i ++;
	}
	return (result);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min = 2;
	max = 10;
	result = ft_range(min, max);
	i = 0;
	printf("Range: min : %d, max %d\n", min , max);
	while (i < (max - min))
	{
		printf("%d\n", result[i]);
		i ++;
	}
	free (result);
	return (0);
}*/
