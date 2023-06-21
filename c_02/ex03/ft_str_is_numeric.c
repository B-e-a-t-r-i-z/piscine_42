/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:02:21 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/12 09:59:57 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0') || (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	r;

	r = ft_str_is_numeric("1564");
	printf("%d", r);
	return (0);
}
*/