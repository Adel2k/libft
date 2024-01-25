/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:26:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/25 13:53:36 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;

	str = (char *)haystack;
	if (!str && !len)
		return (NULL);
	while (*str && len--)
	{
		while (*needle != 0)
		{
			if(*str == *needle)
				needle++;
			else
				return (NULL);
			str++;
		}
		return (str);
	}
	return (NULL);
}
/*
int main ()
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";	
	printf("%s", ft_strnstr(s1, s2, 10));
}*/
