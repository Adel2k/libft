/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:45:21 by adel              #+#    #+#             */
/*   Updated: 2024/01/22 18:49:05 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		if (*str == '\0')
			break;
		str++;
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
