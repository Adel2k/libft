/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <adelineeminian13@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 01:14:43 by adel              #+#    #+#             */
/*   Updated: 2024/01/20 18:30:47 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n != 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
int	main()
{
	char *str = malloc(sizeof(char) * 10);
	
	str[9] = 0;
	ft_memset (str, 'a', 4);
	printf("%s\n", (char *)str);
}*/
