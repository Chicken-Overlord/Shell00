/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:56:35 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 15:06:36 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}
/*
#include <stdio.h>

int	main()
{
	char	b[] = "349867";
	char	c[] = "487592837569";
	printf("%d", ft_str_is_numeric(b));
	ft_str_is_numeric(c);
}
*/
