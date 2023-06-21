/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:15:05 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:21:14 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_to_find;

	while (*str)
	{
		temp_str = str;
		temp_to_find = to_find;
		while (*temp_str && *temp_to_find && (*temp_str == *temp_to_find))
		{
			temp_str++;
			temp_to_find++;
		}
		if (*temp_to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hello World";
	char to_find[] = "x";
	char *result = ft_strstr(str, to_find);
	if (result != NULL)
		printf("%s", result);
	else
		printf("%s", result);
	return (0);
}
*/