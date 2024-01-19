/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:59:02 by adel              #+#    #+#             */
/*   Updated: 2024/01/19 22:59:39 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char *ft_strrchr( char *str, int c)
{
        int i;

        i = ft_strlen(str);
        while (str)
        {
                if (str[i] == (unsigned char)c)
                        return (char *)&str[i];
                i--;
        }
    return NULL;
}
/*
int main()
{
        char str[] = "hello wolrd.";
	printf("%s\n", ft_strrchr(str, 'o'));
//	printf("%s\n", strrchr(str, 'o'));
}
*/
