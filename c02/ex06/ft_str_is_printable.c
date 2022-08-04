/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:22:37 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 16:25:14 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	b[] = "rn7*%&%$*89832b92][flh;";
	printf("%d", ft_str_is_printable(b));
}
*/
