/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:49:36 by adel              #+#    #+#             */
/*   Updated: 2023/12/28 19:55:20 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return;
	while(*s != '\0')
	{
		f(s);
		*s++;
	}

}
#include<ctype.h>

int main()
{
	char art[] = "Artur";
	printf("%s",ft_striter(art,toupper));
}

