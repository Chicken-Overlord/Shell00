/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:16:21 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 16:19:00 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	b[] = "SJFVH";
	printf("%d", ft_str_is_uppercase(b));
}
*/
