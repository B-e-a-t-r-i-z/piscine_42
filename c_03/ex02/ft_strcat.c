/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:06:02 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:18:27 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[50] = "Hel";
	char	str2[50] = "lo World";

	printf("%s\n", ft_strcat(str1, str2));
	//printf("%s\n", strcat(str1, str2));
	return (0);
}
*/