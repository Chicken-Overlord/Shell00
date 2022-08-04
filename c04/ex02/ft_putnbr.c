/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:27:19 by jtang             #+#    #+#             */
/*   Updated: 2022/07/31 21:20:24 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void	ft_putstr(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] != '\0')
	{
		ft_putchar(nb[i]);
		i++;
	}
}
*/

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}	
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc, char	 **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	else
	{
			ft_putnbr(atoi(argv[1]));
	}
}

	ft_putnbr(-283587);
}*/
