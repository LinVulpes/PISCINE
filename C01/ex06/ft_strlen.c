/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:58:21 by thmu              #+#    #+#             */
/*   Updated: 2023/06/26 15:36:23 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i ++;
		str ++;
	}
	return (i);
}

/*
int	main(void)
{
	char	*message;
	char	length;

	message = "Hello, world!";
	length = ft_strlen(message);
	printf("Length of the string: %d\n", length);
	return (0);
}
*/
