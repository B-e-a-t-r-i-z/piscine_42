/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:22:00 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/07 15:43:22 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("Inteiro da divisão: %d\n", div);
	printf("Resto da divisão: %d", mod);
	return (0);
}
*/