/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:51:58 by thmu              #+#    #+#             */
/*   Updated: 2023/06/25 17:03:02 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	remain;
	int	temp;

	temp = *a;
	div = *a / *b;
	*a = div;
	remain = temp % *b;
	*b = remain;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 17;
	b = 5;
	printf("Before division: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("After division: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
*/
