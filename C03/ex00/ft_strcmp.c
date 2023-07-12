/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:31:21 by thmu              #+#    #+#             */
/*   Updated: 2023/06/29 11:16:31 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}

/*
int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Mate";
	int	result = ft_strcmp(s1, s2);

	printf("Comparison result: %d\n", result);
	return (0);
}*/
