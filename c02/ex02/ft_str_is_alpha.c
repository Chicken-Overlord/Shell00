/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:30:22 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 14:55:29 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') \
		|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	*e = "srbhrduv987g982dvd";
	char	*f = "kjnwbHJHJOJBFE489389sgb";
	printf("%d\n", ft_str_is_alpha(e));
	printf("%d", ft_str_is_alpha(f));
}
*/
