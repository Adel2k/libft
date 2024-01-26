/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:39:28 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/26 21:28:18 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *str,unsigned char c)
{
	while (str && *str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(n + 1);
	if (!str)
		return (NULL);
	return (str);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if(!s1 || !set)
		return (NULL);
	start = 0;
	while (check(set, s1[start]))
		start++;
	end = (ft_strlen(s1)) - 1;
	while (check(set, s1[end]) && end >= start)
		end--;
	result = str_new(end - start);
	result = ft_substr(s1, start,end -start);
	return (result);
}
/*
int main()
{
	char	str[] = "cabTRIMab";
	char set[] = "ab";
	printf("%s", ft_strtrim(str, set));
}*/
