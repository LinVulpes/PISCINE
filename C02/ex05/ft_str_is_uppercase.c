/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:00:43 by thmu              #+#    #+#             */
/*   Updated: 2023/06/28 20:14:51 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
	char	test1[] = "AAABBBCCC";
	char    test2[] = "aaabbbccc";
	char    test3[] = "aAbB1234$$";
	char    test4[] = "";

	printf("Test1: %d\n", ft_str_is_uppercase(test1));
	printf("Test2: %d\n", ft_str_is_uppercase(test2));
	printf("Test3: %d\n", ft_str_is_uppercase(test3));
	printf("Test4: %d\n", ft_str_is_uppercase(test4));
	return (1);
}*/
