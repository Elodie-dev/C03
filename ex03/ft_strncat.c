/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:50:35 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/14 18:28:34 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char c[50] = "This is";
	char c1[50] = "This is";
	char c2[] = " complete";
	char c3[] = " complete";
	char c4[] = " with this";
	char c5[] = " with this";

	printf("%s\n%s\n\n", ft_strncat(c, c2, 50), strncat(c1, c3, 50));
	printf("%s\n%s", ft_strncat(c, c4, 10), strncat(c1, c5, 10));
}*/
