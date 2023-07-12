/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:10:45 by thmu              #+#    #+#             */
/*   Updated: 2023/06/26 20:01:00 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	num[] = {5, 2, 3, 1, 9, 312, 1};
	int	size;
	int	i;
	int	j;

	i = 0;
	size = sizeof(num) / sizeof(num[0]);
	printf("Before sorting: ");
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
	ft_sort_int_tab(num, size);
	i = 0;
	printf("\n");
	printf("After sorting: ");
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
	return (0);
}*/
