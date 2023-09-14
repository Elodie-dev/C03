/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:41:53 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/14 12:32:28 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char c1[] = "Must";
	char c2[] = "Differ";
	char c3[] = "Same";
	char c4[] = "Size";
	char c5[] = "";
	
	printf("%d, %d\n", ft_strcmp(c1, c2), strcmp(c1, c2));
	printf("%d, %d\n", ft_strcmp(c3, c4), strcmp(c3, c4));
	printf("%d, %d\n", ft_strcmp(c4, c4), strcmp(c4, c4));
	printf("%d, %d\n", ft_strcmp(c5, c1), strcmp(c5, c1));
	printf("%d, %d", ft_strcmp(c1, c5), strcmp(c1,c5));
}*/
