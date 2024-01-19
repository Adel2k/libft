/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:58:28 by adel              #+#    #+#             */
/*   Updated: 2023/12/27 15:47:12 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	while (n-- != 0)
		*(unsigned char *)s = 0;
}
int main ()
{
	char s[] = "barev dzez";
	ft_bzero(s, 5);
	printf("%s", s);
}
