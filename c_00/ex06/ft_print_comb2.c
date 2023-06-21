/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:02:30 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/05 14:40:56 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if(char a, char b);

void	ft_write(char c, char d);

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_write(a, b);
			ft_if(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_write(char c, char d)
{
	char	c_one;
	char	c_two;
	char	d_one;
	char	d_two;

	c_one = c / 10 + '0';
	c_two = c % 10 + '0';
	d_one = d / 10 + '0';
	d_two = d % 10 + '0';
	write(1, &c_one, 1);
	write(1, &c_two, 1);
	write(1, " ", 1);
	write(1, &d_one, 1);
	write(1, &d_two, 1);
}

void	ft_if(char a, char b)
{
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}
