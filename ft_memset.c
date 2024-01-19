/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <adelineeminian13@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 01:14:43 by adel              #+#    #+#             */
/*   Updated: 2024/01/19 23:10:50 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- != 0)
		*(unsigned char *) s++= (unsigned char) c;
	return (s);
}
/*int	main()
{
	char str[10];
	ft_memset (str, '*', 5);
	ft_memset (str+5, '-', 5);
	printf("%s\n", str);
}*/
