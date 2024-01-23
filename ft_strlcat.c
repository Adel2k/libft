/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/23 20:14:38 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*d;
	char	*s;
	int		i;
	int 	j;

	i = 0;
	j = 0;
	s = (char *)src;
	d = (char *)dst;
	while ((s[i] || d[j]) && dstsize)
	{
		
		
		i++;
	}
	return (1);
}
/*
int main ()
{
	char s[] = "aaaaaaa";
	char s1[] = "bbb";
	size_t result;

	result = (strlcat(s, s1,3));
	printf("%zu" , result);
}*/
