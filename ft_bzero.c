/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:58:28 by adel              #+#    #+#             */
/*   Updated: 2024/01/24 17:11:02 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (n != 0)
	{
		*(unsigned char *)s++ = 0;
		n--;
	}
}
/*
int main ()
{
	char s[] = "barev dzez";
	ft_bzero(s, 5);
	printf("%s", s);
}*/
