/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:51:28 by adel              #+#    #+#             */
/*   Updated: 2024/01/20 00:57:46 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strncpy(char *str, char *str1, unsigned int n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[i] && str[j] && (int)n > i)
	{
		str[j] = str1[i];
		i++;
		j++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "adel";
	char str1[] = "barev";
	printf("%s\n", ft_strncpy(str,str1, 2));
//	printf("%s\n", strncpy(str, str1, 2));
}
*/
