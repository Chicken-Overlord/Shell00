/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:33:32 by jtang             #+#    #+#             */
/*   Updated: 2022/07/18 21:09:56 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char q)
{
	write(1, &q, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = x + 1;
	z = y + 1;
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				putchar(x);
				putchar(y);
				putchar(z);
				putchar(',');
				putchar(' ');
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{	
	ft_print_comb();
	return (0);
}
