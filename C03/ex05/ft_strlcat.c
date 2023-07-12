/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:36:05 by thmu              #+#    #+#             */
/*   Updated: 2023/07/04 18:26:10 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	total_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len ++;
	while (src[src_len] != '\0')
		src_len ++;
	total_len = dest_len + src_len;
	if (dest_len >= size)
		return (total_len);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i ++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = "World";
	unsigned int	result;

	result =  ft_strlcat(dest, src, 5);
	printf("Destination: %s\n", dest);
	printf("Source : %s\n", src);
	printf("Length : %u\n", result);
	return (0);
}*/
