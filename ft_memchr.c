/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:45:21 by adel              #+#    #+#             */
/*   Updated: 2023/12/27 19:12:11 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void 	*memchr(const void *str, int c, size_t n)
{

}
int main()
{
	const char s[] = "adel ? ka";
	const char ch = '?';
	char *ret = memchr(s, ch , 9);
	printf("%s", ret);
}
/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("%s\n", ret);

   return(0);
}*/
