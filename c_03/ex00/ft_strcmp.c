/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:11:39 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 12:16:37 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "TeSte";

	printf("Primeira string: %s\n", str1);
	printf("Segunda string: %s\n", str2);
	printf("Valor de comparação (strcmp): %d\n", strcmp(str1, str2));
	printf("Valor da comparação (ft_strcmp): %d\n", ft_strcmp(str1, str2));
	return (0);
}
*/
// se Valor de retorno < 0, indica que str1 é menor que str2.

// se Valor de retorno > 0, indica que str2 é menor que str1.

// se Return value = 0 então indica que str1 é igual a str2.
