/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:58:27 by adel              #+#    #+#             */
/*   Updated: 2024/01/21 18:59:54 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;

	src_p = (unsigned char *)src;
	dest_p = (unsigned char *)dest;
	if (dest == 0 && src == 0)
		return (NULL);
	while (n != 0)
	{
		*dest_p++ = *src_p++;
		n--;
	}
	return (dest);
}
/*int main ()
{
	char buff1[22];
	char src[] = "test basic du memcpy !";
	//printf("befor memcpy dest = %s\n", dest);
	//ft_memcpy(dest, src, 5);
	//printf("After memcpy dest = %s\n", dest);
	//return 0;
	char *res;
	char *res2;
	res = (char *)ft_memcpy(buff1, src, 22);
	printf("%s\n", res);
	res2 = (char *)memcpy(buff1, src, 22);
	printf("%s\n", res);
	if (res != res2)
		printf("ERROR");
}*/
