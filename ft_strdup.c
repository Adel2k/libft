/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:39:07 by adel              #+#    #+#             */
/*   Updated: 2024/01/24 17:10:20 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const char	*str;
	size_t		size;
	char		*result;

	size = ft_strlen(s);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	result = (char *)ft_memcpy((void *)str, s, size);
	result[size] = '\0';
	return (result);
}
/*
int main()
{
	char	str[] = "hello world";
	char	*result;
	result = ft_strdup("lol");
	printf("%s", result);
}*/
