/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:21:53 by adel              #+#    #+#             */
/*   Updated: 2023/12/27 22:40:46 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_strlen (const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void	ft_putstr_fd(char const *s, int fd)
{
	write (fd, &s, ft_strlen(s));
}
int main ()
{
	char s[] = "adel";
	printf ("%d",ft_strlen(s));
	ft_putstr_fd(s , 1);
}
