/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:27:30 by thmu              #+#    #+#             */
/*   Updated: 2023/06/28 14:32:18 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len ++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int 	main(void)
{
	char	dest[10];
	char	src[] = "Hello!, nice to meet ya 123";
	unsigned int	length;

	length = ft_strlcpy(dest, src, 30);
	printf("Copied string: %s\n", dest);
	printf("Length of the string: %d\n", length);
	return (0);
}*/
