/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:02:59 by thmu              #+#    #+#             */
/*   Updated: 2023/06/25 10:35:06 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Before swapping: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swapping: a = %d, b = %d\n", a, b);
	return (0);
}
*/
