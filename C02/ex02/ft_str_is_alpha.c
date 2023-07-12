/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:08:46 by thmu              #+#    #+#             */
/*   Updated: 2023/06/27 18:44:45 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
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
	char	m1[] = "Hello";
	char	m2[] = "123352334";
	char	m3[] = "Hello , World!";
	char	m4[] = "";

	printf("Message1: %d\n", ft_str_is_alpha(m1));
	printf("Message2: %d\n", ft_str_is_alpha(m2));
	printf("Message3: %d\n", ft_str_is_alpha(m3));
	printf("Message4: %d\n", ft_str_is_alpha(m4));
	return (0);
}*/
