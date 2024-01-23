/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:29:36 by adel              #+#    #+#             */
/*   Updated: 2024/01/23 20:04:18 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!size)
		return (i);
	while (--size && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
/*
int main() 
{
	char *dest;
    const char *src = "aaaaaaaa";

    size_t result = ft_strlcpy(dest, src, 0);

    printf("Copied: %s\n", dest);
    printf("Length of source: %zu\n", result);

    return 0;
}
*/
