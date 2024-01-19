/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:17:58 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/19 20:38:57 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i >=(int) n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);

}
/*
int main ()
{
	char str[] = "barev1";
	char str1[] = "barev";
	*str = 100;
	*str1 = -100;
	printf ("%d\n", ft_strncmp(str, str1, 3));
	printf ("%d\n", strncmp(str, str1, 3));
}*/
