/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:05:54 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/29 21:56:45 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*memory;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	memory = (char *)malloc(ft_strlen(s) + 1);
	if (!memory)
		return (NULL);
	str = memory;
	while (s && s[i])
	{
		memory[i] = f(i, s[i]);
		i++;
	}
	memory[ft_strlen(s)] = 0;
	return ((char *)str);
}
