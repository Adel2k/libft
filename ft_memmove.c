/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:41:40 by adel              #+#    #+#             */
/*   Updated: 2024/01/30 23:44:49 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;

	if (!dest && !src)
		return (dest);
	ptr = (char *)dest;
	if ((unsigned char *)dest == (unsigned char *)src)
		return (dest);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		while (n--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (ptr);
}
/*
int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	if (src != ft_memmove(src, dest, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);

}*/
