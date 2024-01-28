/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:05:54 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/28 16:32:30 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*memory;
	char	*str;

	str = 0;
	i = 0;
	if (!s)
		return (NULL);
	memory = (char *)malloc(sizeof(s) + 1);
	if (!memory)
		return (NULL);
		memory = str;
	while (s && s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	memory[i + 1] = 0;
	return (memory);
}

