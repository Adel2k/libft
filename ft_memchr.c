/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:45:21 by adel              #+#    #+#             */
/*   Updated: 2024/01/21 20:32:23 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (((unsigned char *)s)[i] && i <= (int)n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char s[] = "adel ? ka";
	const char ch = '1';
	char *ret = ft_memchr(s, ch , 9);
	printf("%s", ret);
}
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("%s\n", ret);

   return(0);
}*/
