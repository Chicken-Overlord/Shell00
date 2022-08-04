/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:00:37 by jtang             #+#    #+#             */
/*   Updated: 2022/08/03 16:47:08 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	ret;

	ret = nb;
	if (power > 0)
	{
		power--;
		return (ret * ft_recursive_power(nb, power--));
	}
	else if (power < 0)
		return (0);
	else
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(0, -4));
}
*/
