/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:51:11 by jtang             #+#    #+#             */
/*   Updated: 2022/07/26 11:29:21 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || \
					(str[i] >= 'A' && str[i] <= 'Z'))
				return (1);
			if ((str[i] < 'a' && str[i] > 'z') || \
					(str[i] < 'A' && str[i] > 'Z'))
				break;
			i++;
		}
	}
#include <stdio.h>
int	main()
{
	char	a[] = "dhsdfvfsdbf";
	char	b[] = "i987928";
	printf("%d\n", ft_str_is_alpha(a));
	printf("%d", ft_str_is_alpha(b));
}
