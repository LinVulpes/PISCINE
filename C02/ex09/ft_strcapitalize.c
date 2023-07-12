/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:49:17 by thmu              #+#    #+#             */
/*   Updated: 2023/06/28 14:31:39 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		j = str[i];
		if (cap == 1 && j >= 'a' && j <= 'z')
			str[i] -= 32;
		else if (cap == 0 && j >= 'A' && j <= 'Z')
			str[i] += 32;
		if (j < '0' || (j > '9' && j < 'A') || (j > 'Z' && j < 'a') || j > 'z')
			cap = 1;
		else
			cap = 0;
		i ++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test1[] = "hello World! i am goinG to conquire Th!@ woRld!";

	ft_strcapitalize(test1);
	printf("Testing: %s\n", test1);
	return (0);
}*/
