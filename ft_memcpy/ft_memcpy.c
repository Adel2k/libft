/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:58:27 by adel              #+#    #+#             */
/*   Updated: 2023/12/27 16:45:33 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (dest && src && n--)
	{
		*(unsigned char*)dest++ = *(unsigned char *)src++;

	}
	return (dest);
}

int main ()
{
	const char src [] = "adel barev";
	char dest[] = "Helooooo";
	printf("befor memcpy dest = %s\n", dest);
	memcpy(dest, src, 4);
	printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
