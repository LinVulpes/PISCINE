/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:16:53 by thmu              #+#    #+#             */
/*   Updated: 2023/06/28 18:30:12 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
	char	test1[] = "abcxyz";
	char    test2[] = "ABC123@@";
	char    test3[] = "\n";
	char    test4[] = "Hello	World!";

	printf("Test1: %d\n", ft_str_is_printable(test1));
	printf("Test2: %d\n", ft_str_is_printable(test2));
	printf("Test3: %d\n", ft_str_is_printable(test3));
	printf("Test4: %d\n", ft_str_is_printable(test4));
	return (1);
}*/
