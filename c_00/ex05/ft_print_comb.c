/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:42:00 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/15 10:33:08 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if(char a);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_if(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}

void	ft_if(char a)
{
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
