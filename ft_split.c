/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:50:13 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/05 22:10:13 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
				if (s[i] == 0)
					break ;
			}
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static char	**split(char **memory, char const *s, char c)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	temp = memory;
	while (s[i] != '\0' )
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if ((s[i] == c || s[i] == '\0'))
			{
				*temp = ft_substr(s, j, i - j);
				temp++;
			}
		}
		else
			i++;
	}
	*temp = 0;
	return (memory);
}

char	**ft_split(char const *s, char c)
{
	char	**memory;

	if (!s)
		return (NULL);
	memory = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!memory)
		return (NULL);
	return (split(memory, s, c));
}
/*
int main ()
{
	int i;
	i = 0;
	char **result;
	char *str = "loremisus. Suspendisse";
	result = ft_split(str, ' ');

	while (result && result[i])
	{
		printf("%s\n", result[i]);
//		printf("%lu\n", ft_strlen(result[i]));
		i++;
	}
}
*/
