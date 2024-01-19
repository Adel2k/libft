/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:47:05 by adel              #+#    #+#             */
/*   Updated: 2024/01/16 18:47:52 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	while (src && src[i] && i <= n && ((char)c != src[i]))
	{
		(unsigned char)dest[i] = (unsigned char)src[i];
		i++;
	}
}
int main()
{
	char src[] = "barev adel.ajsh";
	char dest[50] = "";
	ft_memccpy(dest, src, 'd', 10);
	printf("%s\n", dest);
}
