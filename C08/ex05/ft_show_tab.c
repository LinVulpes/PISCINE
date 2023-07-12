/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:22:56 by thmu              #+#    #+#             */
/*   Updated: 2023/07/12 07:42:33 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
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

void	ft_putstr(char	*str)
{
	while (*str)
	{
		ft_putchar(*str);
		str ++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i ++;
	}
}
/*
int main(void)
{
    struct s_stock_str stockArray[4] = {
        {5, "Apple", "AppleCopy"},
        {6, "Banana", "BananaCopy"},
        {6, "Orange", "OrangeCopy"},
        {4, "Mango", "MangoCopy"}
    };

    ft_show_tab(stockArray);
    return (0);
}*/
