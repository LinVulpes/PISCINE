/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:57:42 by thmu              #+#    #+#             */
/*   Updated: 2023/06/28 18:24:50 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char	test1[] = "abcdef";
	char    test2[] = "abc123";
	char    test3[] = "abc$%^$";
	char    test4[] = "";

	printf("Test1: %d\n", ft_str_is_lowercase(test1));
	printf("Test2: %d\n", ft_str_is_lowercase(test2));
	printf("Test3: %d\n", ft_str_is_lowercase(test3));
	printf("Test4: %d\n", ft_str_is_lowercase(test4));
	return (0);
}*/
