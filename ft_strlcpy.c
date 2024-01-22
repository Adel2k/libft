/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:29:36 by adel              #+#    #+#             */
/*   Updated: 2024/01/22 10:30:51 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while(src[i] && sizeof(src) >= i)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}
/*
int main() 
{
    char dest[];
    const char *src = "123456";

    size_t result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied: %s\n", dest);
    printf("Length of source: %zu\n", result);

    return 0;
}
*/
