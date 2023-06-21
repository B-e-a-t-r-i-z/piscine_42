/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:04:52 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:19:29 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (nb-- && *src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[15] = "Hel";
	char	str2[15] = "lo World";

	printf("%s\n", ft_strncat(str1, str2, 4));
	//printf("%s\n", strncat(str1, str2, 1));
	return (0);
}
*/