/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:09 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/14 12:33:12 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
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

	printf("%d, %d\n", ft_strncmp(c1, c2, strlen(c2)), strncmp(c1, c2, strlen(c2)));
	printf("%d, %d\n", ft_strncmp(c3, c4, strlen(c4)), strncmp(c3, c4, strlen(c4)));
	printf("%d, %d\n", ft_strncmp(c4, c4, strlen(c4)), strncmp(c4, c4, strlen(c4)));
	printf("%d, %d\n", ft_strncmp(c5, c1, strlen(c1)), strncmp(c5, c1, strlen(c1)));
	printf("%d, %d", ft_strncmp(c1, c5, strlen(c5)), strncmp(c1, c5, strlen(c5)));
}*/
