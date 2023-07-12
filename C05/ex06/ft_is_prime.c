/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:22:19 by thmu              #+#    #+#             */
/*   Updated: 2023/07/09 15:53:13 by thmu             ###   ########.fr       */
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
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*
int	main(void)
{
	int	num;
	int	result;

	num = 10;
	result = ft_is_prime(num);
	printf("%d is prime: %s\n", num, result ? "Yes" : "No");
	return (0);
}*/
