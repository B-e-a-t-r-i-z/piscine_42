/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bede-alm <bede-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:38:25 by bede-alm          #+#    #+#             */
/*   Updated: 2023/06/08 15:29:13 by bede-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*name;
	int		nc;

	name = "Beatriz";
	nc = ft_strlen(name);
	printf("%d", nc);
	return (0);
}
*/