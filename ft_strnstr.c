/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:26:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/01 23:49:45 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	int	i;

	str = (char *)haystack;
	i = 0;
	if (!str && !len)
		return (NULL);
	if (!needle[i])
		return (str);
	while (*str && len--)
	{
		i = 0;
		while (needle[i]&& (*str == needle[i]) && len--)
		{
			if (!needle[i + 1])
				return (str);
			i++;
		}
		str++;
	}
	return (NULL);
}
/*
int main ()
{
//	char *s1 = "see FF your FF return FF now FF";
//	char *s2 = "FF";	
	printf("%s",ft_strnstr("ipsum lorem ipsumm dolor sit amet", "ipsumm", 30));
}*/
