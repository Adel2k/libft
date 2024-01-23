/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:08:45 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/23 19:16:39 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < (int)n)
		i++;
	if (i == (int)n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main ()
{
	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t size = 6;
	printf("%d", ft_strncmp(big, little, 6));
}*/
