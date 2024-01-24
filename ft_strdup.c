/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:39:07 by adel              #+#    #+#             */
/*   Updated: 2024/01/24 10:05:07 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const char	*str;
	size_t	size;

	size = ft_strlen(s);
	if (s && *s)
		str = (char *)malloc(size * char);
	else
		return (NUll);
	return (ft_memcpy(str, s, size));
}
int main()
{
	char	str[] = "hello world";
	char	*result;
	result = ft_strdup(str);
	printf("%s", result);
}
