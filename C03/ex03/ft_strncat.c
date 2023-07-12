/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:39:04 by thmu              #+#    #+#             */
/*   Updated: 2023/07/05 13:31:12 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr ++;
	}
	while (nb > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr ++;
		src ++;
		nb --;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "Hi, ";
	char	src[] = "Are you ok?";

	printf("Initial dest: %s\n", dest);
	printf("Source: %s\n", src);

	ft_strncat(dest, src, 12);
	printf("After strncat: %s\n", dest);
	return(0);
}*/
