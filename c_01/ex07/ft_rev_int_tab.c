/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:34:40 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/07 15:45:28 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab [size];
		tab[size] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[6];
	int	i;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	array[5] = 6;
	i = 0;
	ft_rev_int_tab(array, 6);
	while (i < 6)
	{
		printf("%d", array[i]);
		if (i < 5)
			printf(" ");
		i++;
	}
	return (0);
}
*/