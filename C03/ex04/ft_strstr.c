/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:00:18 by thmu              #+#    #+#             */
/*   Updated: 2023/06/30 15:29:28 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*current;
	char	*finding;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		current = str;
		finding = to_find;
		while (*finding != '\0' && *finding == *current)
		{
			current ++;
			finding ++;
		}
		if (*finding == '\0')
		{
			return (str);
		}
		str ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	test1[] = "Hello How are you? Ready for exam??";

	printf("Testing : %s\n", ft_strstr(test1, "How"));
	return (0);
}*/
