/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:32:19 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/12 09:35:42 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Bia";
	char	b[] = "Hello World";

	printf("Antes: %s\n", a);
	ft_strcpy(a, b);
	printf("Depois: %s", a);
	return (0);
}
*/