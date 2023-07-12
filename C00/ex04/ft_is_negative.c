/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:59:41 by thmu              #+#    #+#             */
/*   Updated: 2023/06/22 20:43:16 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = -5;
	num2 = 10;
	num3 = 0;
	ft_is_negative(num1);
	ft_is_negative(num2);
	ft_is_negative(num3);
	return (0);
}
*/
