/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:48:53 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:17:26 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i]) && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "TeSte";
	int		n = 3;

	printf("Primeira string: %s\n", str1);
	printf("Segunda string: %s\n", str2);
	printf("\n");
	printf("Valor da comparação (strncmp): %d\n", strncmp(str1, str2, n));
	printf("Valor da comparação (ft_strncmp): %d\n", ft_strncmp(str1, str2, n));
	return (0);
}
*/