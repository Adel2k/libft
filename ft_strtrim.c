/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:39:28 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/25 20:11:26 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char *str,unsigned char c)
{
	while (str && *str)
	{
		if (*str == c)
			return (1);
		*str++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	len;

	size = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (check(s1, *set) && *set)
			*set++;
		*s1++;
	}
	start = *s1;
	while (size--)
	{
		if (check(s1, *set) && *set)
			*set--;
		*s1--;
	}
	end = *s1;
	len = end - start;
	ft_substr(s1, start, len);
}
int main()
{
	char	str[] = "abTRIMab";
	char set[] = "ab";
	printf("%s", ft_strtrim(str, set));
}	
