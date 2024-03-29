/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:21:53 by adel              #+#    #+#             */
/*   Updated: 2024/01/29 15:35:41 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
}
/*
int main ()
{
	char s[] = "adel";
	printf ("%d",ft_strlen(s));
	ft_putstr_fd(s , 1);
}*/
