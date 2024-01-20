/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:00:20 by adel              #+#    #+#             */
/*   Updated: 2024/01/20 08:50:33 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char	*ft_strstr(char *src, char *dest)
{
	int i;
	int j;
	int x;
	char res[50];

	i = 0;
	x = 0;
	while (src[i])
	{
		j = 0;
		if(src[i] == dest[j])
		{
			res[x] = src[i];
			j++;
			x++;
			i++;
		}
		i++;
	}
	res[x] = 0;
	return (res);

}*/

char	*ft_strstr(char *src, char *dest)
{
	int	i;
	int	j;
	int	flag;

	j = 0;
	i = 0;
	while (dest[0] == 0)
		return (src);
	while (src[i])
	{
		if (src[i] == dest[j])
			j++;
		i++;
	}
	if (dest[j] == 0)
		return ((char *)&src[i]);
}
/*
int main ()
{
	char str[] = "barev adel";
	char str1[] = "re";
	printf("%s\n", ft_strstr(str, str1));
//	printf("%s\n", strstr(str, str1));
}*/
