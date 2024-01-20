/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:55:20 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/20 00:52:22 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	 
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*

#include <stdio.h>
#include <string.h>
int main ()
{
	char str[] = "adel";
	char str1[] = "barrrrrev";
	printf("%s\n", ft_strcat(str, str1));
//	printf("%s\n", strcat(str, str1));
}*/
