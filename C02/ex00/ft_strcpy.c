/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:12:58 by thmu              #+#    #+#             */
/*   Updated: 2023/06/27 10:19:55 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (i);
}
/*
int	main(void)
{
	char	source[] = "Hello, babe!";
	char	destination[50];

	ft_strcpy(destination, source);
	printf("Copy string: %s\n", destination);
	return (0);
}*/
