/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:44:46 by thmu              #+#    #+#             */
/*   Updated: 2023/06/27 14:51:46 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*i;

	i = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		n --;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest ++;
		n --;
	}
	return (i);
}
/*
int	main(void)
{
	char	src[] = "Hello, 42!";
	char	dest[8];

	ft_strncpy(dest, src, 5);
	printf("Characters in destination: %s\n", dest);
	return (0);
}*/
