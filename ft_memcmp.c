/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:40:39 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/21 20:25:04 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while ((*(unsigned char *)s1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) && i < (int)n)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int main ()
{
	char s1[] = "hjagdbj";
	char s2[] = "hjuyufy";
	printf("%d\n", ft_memcmp(s1, s2, 7));
}*/
