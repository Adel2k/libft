/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:41:40 by adel              #+#    #+#             */
/*   Updated: 2024/01/30 21:02:50 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((unsigned char *)dest == (unsigned char *)src)
		return (dest);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		while (n != 0)
		{
			((unsigned char *)dest)[n -1] = ((unsigned char *)src)[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		while (n != 0)
		{
			*(unsigned char *)dest++ = *(unsigned char *)src++;
			n--;
		}
		return (dest);
	}
}

int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}
