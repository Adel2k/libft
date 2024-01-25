/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/25 13:52:00 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int 	j;

	i = 0;
	while (dst && dst[i] && i < (int)dstsize)
		i++;
	j = 0;
	while (src && src[i] && (i + j + 1 < (int)dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + strlen(src));
}
/*
int main ()
{
	char s[] = "<dkjkfj";
	char *s1;
	size_t result;

	result = (ft_strlcat(s, s1,3));
	printf("%zu" , result);
}*/
