/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:59:02 by adel              #+#    #+#             */
/*   Updated: 2024/01/22 21:36:02 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (s + i);
	while (i--)
	{
		if (*(s + i) == (unsigned char)c)
			return (s + i);
	}
	return (NULL);
}
/*
int main()
{
        char str[] = "hello wolrd.";
	printf("%s\n", ft_strrchr(str, 'o'));
//	printf("%s\n", strrchr(str, 'o'));
}
*/
