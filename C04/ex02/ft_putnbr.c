/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:53:13 by thmu              #+#    #+#             */
/*   Updated: 2023/07/05 11:24:14 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	while (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + (nb % 10));
}
/*
int main(void)
{
    int number1 = 12345;
    ft_putnbr(number1); // Displays "12345" on the standard output
    ft_putchar('\n');  // Prints a new line

    int number2 = -98765;
    ft_putnbr(number2); // Displays "-98765" on the standard output
    ft_putchar('\n');  // Prints a new line
    return (0);
}*/
