/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:09:43 by thmu              #+#    #+#             */
/*   Updated: 2023/06/25 14:30:56 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	num1;
	int	num2;
	int	div_result;
	int	mod_result;

	num1 = 17;
	num2 = 5;
	ft_div_mod(num1, num2, &div_result, &mod_result);
	printf("Division result: %d\n", div_result);
	printf("Modulo result: %d\n", mod_result);
	return (0);
}
*/
