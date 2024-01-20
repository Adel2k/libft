/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:22:15 by adel              #+#    #+#             */
/*   Updated: 2024/01/20 00:59:08 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (1);
	else if (s1 == 0 || s2 == 0)
		return (0);
	while (s1 && s2 && (int)n >= i)
	{
		if (s1[i] == s2[i])
			flag = 1;
		else 
			return (0);
		i++;
	}
	if (flag)
		return (1);
	else 
		return (0);
}
/*
int main ()
{
	char s1[] = "";
	char s2[] = "";
	printf ("%d",ft_strnequ(s1, s2, 7));
}*/
