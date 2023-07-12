/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:15:24 by thmu              #+#    #+#             */
/*   Updated: 2023/07/11 17:22:16 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) < nb && i < 46341)
		i ++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	int	num;

	num = 2;
	printf("Square root of %d = %d", num, ft_sqrt(num));
	return (0);
}*/
