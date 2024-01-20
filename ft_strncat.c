/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:06:01 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/20 00:56:45 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *src, char *dest, unsigned int n)
{
	int i;
	int j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	j = 0;
	while (dest[j] && (int)n > j )
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	src[i] = 0;
	return (src);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char str[] = "adel";
	char str1[] = "barev";
	printf("%s\n", ft_strncat(str, str1, 3));
	//printf("%s\n", strncat(str, str1, 3));
}*/
