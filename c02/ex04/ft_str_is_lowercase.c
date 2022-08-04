/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:07:35 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 16:04:16 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	b[] = "";
	printf("%d", ft_str_is_lowercase(b));
}
*/
