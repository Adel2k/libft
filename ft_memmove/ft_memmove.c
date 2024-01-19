/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:11:13 by adel              #+#    #+#             */
/*   Updated: 2024/01/17 11:21:45 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_memmove (void *dest, const void *src, size_t n)
{
	
}
int main ()
{
	char src[] = "adel";
	char *dest = (char)malloc((char) * sizeof(src));
	memmove(dest, src, 5);
}
