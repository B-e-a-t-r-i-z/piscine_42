/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:52:02 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/07 15:45:55 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[6];
	int	i;

	array[0] = 0;
	array[1] = 4;
	array[2] = 3;
	array[3] = 6;
	array[4] = 5;
	array[5] = 6;
	i = 0;
	ft_sort_int_tab(array, 6);
	while (i < 6)
	{
		printf("%d", array[i]);
		if (i < 5)
		{
			printf(" ");
		}
		i++;
	}
	return (0);
}
*/