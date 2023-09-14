/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:01:25 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/14 18:28:08 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
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

	printf("%s\n%s\n\n", ft_strcat(c, c2), strcat(c1, c3));
	//ft_strcat(c, c1);
	printf("%s\n%s", ft_strcat(c, c4), strcat(c1, c5)); 
}*/
