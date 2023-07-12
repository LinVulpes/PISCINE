/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:33:27 by thmu              #+#    #+#             */
/*   Updated: 2023/07/09 16:12:24 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
	{
		i ++;
	}
	return (i);
}
/*
int	main(void)
{
	int	num;
	int	result;

	num = 10;
	result = ft_find_next_prime(num);
	printf("Next prime number after %d:  %d\n", num, result);
	return (0);
}*/
