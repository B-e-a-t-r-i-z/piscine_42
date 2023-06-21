/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:58:18 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:40:31 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	if (size > i)
	{
		return (i + j);
	}
	else
	{
		return (i + size);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "teste";
	char	str2[20] = "teste";

	printf("%d", ft_strlcat(str1, str2, 2));
	return (0);
}
*/
