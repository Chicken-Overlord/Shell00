/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:13:31 by jtang             #+#    #+#             */
/*   Updated: 2022/08/03 17:33:33 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = index;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(res - 2) + ft_fibonacci(res - 1));
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int	argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d", (ft_fibonacci(atoi(argv[1]))));
}
*/
