/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:14:50 by thmu              #+#    #+#             */
/*   Updated: 2023/07/06 18:32:52 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (result);
}
/*
int	main(void)
{
	char	num;
	char	result;

	num = 5;
	result = ft_recursive_factorial(num);
	printf("Recursive factorial number: %d\n", result);
	return (0);
}*/
