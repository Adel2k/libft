/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:41:40 by adel              #+#    #+#             */
/*   Updated: 2024/01/21 17:59:45 by aeminian         ###   ########.fr       */
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
/*int main()
{
	char src[] = "abcdefgh";
	printf("%s\n",ft_memmove(src +4, src, sizeof(src)));
}*/	
