/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:41:48 by thmu              #+#    #+#             */
/*   Updated: 2023/06/29 15:27:35 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str ++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	test1[] = "HELLO! HOW ARE YOU?";
	char	test2[] = "1: i am still alive!!";

	ft_strlowcase(test1);
	ft_strlowcase(test2);
	printf("Test1: %s\n", test1);
	printf("Test2: %s\n", test2);
	return (0);
}*/
