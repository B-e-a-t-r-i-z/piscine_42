/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:59:35 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/07 15:43:54 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Inteiro da divisão: %d\n", a);
	printf("Resto da divisão: %d", b);
	return (0);
}
*/