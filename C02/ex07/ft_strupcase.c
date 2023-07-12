/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:07:38 by thmu              #+#    #+#             */
/*   Updated: 2023/06/29 19:07:41 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str ++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	test1[] = "Hello!";
	char	test2[] = "hel lo *hi123";

	ft_strupcase(test1);
	ft_strupcase(test2);
	printf("Test1: %s\n", test1);
	printf("Test2: %s\n", test2);

	return (0);
}*/
