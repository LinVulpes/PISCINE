/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:24:43 by thmu              #+#    #+#             */
/*   Updated: 2023/07/07 16:30:06 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*result;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length ++;
	result = malloc(sizeof(char) * (length + 1));
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i ++;
	}
	result [i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*result;

	result = ft_strdup("Hi! How are you?");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
