/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:41:40 by adel              #+#    #+#             */
/*   Updated: 2024/01/21 09:57:17 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	
}	
int main()
{
	char src[] = "adel barev";
	memmove(src +4, src, sizeof(src));
	printf("%s\n", src);
}	
