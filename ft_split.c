/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:50:13 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/28 16:05:43 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_new(size_t n)
{
	char	*memory;

	memory = (char *)malloc(n + 1);
	if (!memory)
		return (NULL);
	return (memory);
}

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
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*result;
	char	*memory;
	size_t	word;
	char **res;

	j = 0;
	i = 0;
	while (s && s[i] && c)
	{
		while (s && s[i] && s[i] != c)
			i++;
		if (c == s[i])
		{
			memory = ft_substr(s, j , i - j);
			if (!memory )
				return (NULL);
			i++;
			j = i;
		}
		word = word_count(s, c);
		while (memory)
		{
			result = str_new(word);
			*(word + result) = 0;
		}
		result = memory;
		res = &result;
	}
	return (res);

}
/*
int main ()
{
	char **result;
	char str[] = "hello world";
	result = ft_split(str, ' ');
	printf("%s", *result);
}*/
