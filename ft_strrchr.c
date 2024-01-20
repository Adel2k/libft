/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:59:02 by adel              #+#    #+#             */
/*   Updated: 2024/01/20 16:19:36 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
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
