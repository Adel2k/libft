/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/30 20:43:46 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	int		i;

	i = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (len_dest >= dstsize)
		return (dstsize + len_src);
	while (src[i] && (len_dest + i < dstsize - 1))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = 0;
	if (len_dest + i < dstsize)
		return (len_dest + len_src);
	return (dstsize + len_src);
}
/*
int main ()
{
	char	*dest;
	int		arg;

	dest[11] = 'a';
	printf("%lu",ft_strlcat(dest, "lorem", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
}*/
