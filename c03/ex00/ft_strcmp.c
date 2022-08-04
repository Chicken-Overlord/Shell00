/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:44:05 by jtang             #+#    #+#             */
/*   Updated: 2022/07/28 18:03:14 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] < s2[i])
	{
		j = s1[i] - s2[i];
		return (j);
	}
	if (s1[i] > s2[i])
	{
		j = s1[i] - s2[i];
		return (j);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	while (	argc = 2;
	puts(argv[0]);
	ft_strcmp(argv[2]);

#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[] = "hvdrthvr";
	char	s2[] = "";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
*/
