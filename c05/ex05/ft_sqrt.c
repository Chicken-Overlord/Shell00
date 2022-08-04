/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:10:19 by jtang             #+#    #+#             */
/*   Updated: 2022/08/03 17:35:59 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	else if (nb >= 0)
	{
		while (i <= nb)
		{
			if ((i * i) == nb)
				return (i);
			else
				i++;
			if (i > 46340)
				return (0);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
	{
		printf("%d", ft_sqrt(atoi(argv[1])));
	}
}
*/
