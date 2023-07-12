/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:37:33 by thmu              #+#    #+#             */
/*   Updated: 2023/06/29 16:55:58 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 ++;
		s2 ++;
		n --;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hello";
	char	*s3 = "Hi";
	char	*s4 = "World";
	char	*s5 = "Helm";
	int	result = ft_strncmp(s1, s2, 5);
	int	result1 = ft_strncmp(s3, s4, 3);
	int     result2 = ft_strncmp(s2, s5, 4);

	printf("Comparison result: %d\n", result);
	printf("Comparison of result: %d\n", ft_strncmp(s1, s2, 5));
	printf("Comparison result1 %d\n", result1);
	printf("Comparison of result1: %d\n", ft_strncmp(s3, s4, 3));
	printf("Comparison result2 %d\n", result2);
	printf("Comparison of result2: %d\n", ft_strncmp(s2, s5, 4));
	return (0);
}*/
