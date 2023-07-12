/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:22:16 by thmu              #+#    #+#             */
/*   Updated: 2023/06/29 15:21:44 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char	*dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr ++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr ++;
		src ++;
	}
	*ptr = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	source[] = "Person1 :Hello, How are you?";
	char	destination[40];

	ft_strcat(destination, source);
	printf("Copied string: %s\n", destination);

	char	source1[20] = "Person2 :";
	char	source2[] = ".... My brain is lagging ...";

	printf("1st source: %s\n", source1);
	printf("2nd source: %s\n", source2);
	ft_strcat(source1, source2);
	printf("Concatenated string: %s\n", source1);
	return (0);
}*/
