/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:06:33 by jtang             #+#    #+#             */
/*   Updated: 2022/08/03 16:28:59 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
		nb--;
	}
	else if (nb == 0)
		return (1);
	else
		return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(-16));
}
*/
