/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:28:07 by thmu              #+#    #+#             */
/*   Updated: 2023/06/27 16:54:52 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/*
int	main(void)
{
	char	test1[] = "12345";
	char	test2[] = "ABSDDF";
	char	test3[] = "ABC123";
	char	test4[] = "123456789!@";

	printf("Test1: %d\n", ft_str_is_numeric(test1));
	printf("Test2: %d\n", ft_str_is_numeric(test2));
	printf("Test3: %d\n", ft_str_is_numeric(test3));
	printf("Test4: %d\n", ft_str_is_numeric(test4));
	return (0);
}*/
