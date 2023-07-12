/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:31:17 by thmu              #+#    #+#             */
/*   Updated: 2023/07/06 18:43:16 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	result = nb * ft_recursive_power(nb, power - 1);
	while (power > 0)
	{
		return (result);
	}
	return (nb);
}
/*
int	main(void)
{
	int	result;

	result = ft_recursive_power(2, 5);
	printf("Number of recursive power: %d", result);
	return (0);
}*/
