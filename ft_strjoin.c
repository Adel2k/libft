/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:58:53 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/27 16:56:30 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*memory;
	char	*result;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	memory = (char *)malloc(size +1);
	if (!memory)
		return (NULL);
	*(memory + size) = 0;
	result = memory;
	while (s1 && *s1)
		*memory++ = *s1++;
	while (*s2)
		*memory++ = *s2++;
	return (result);
}
/*
int main ()
{
    char *s1;
    char s2[] = "world";
    printf("%s", ft_strjoin(s1, s2));
}*/
