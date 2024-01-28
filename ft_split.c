/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:50:13 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/28 14:56:22 by aeminian         ###   ########.fr       */
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

static size_t	word_count(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i]) != c)
		{
			count++;
			while (s[i])
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
	char	**result;
	char	*memory;
	size_t	word;

	j = 0;
	i = 0;
	while (s && s[i] && c)
	{
		while (s && s[i] && s[i] != c)
			i++;
		if (c == s[i])
		{
			memory = ft_substr(s, j , i - j + 1);
			if (!memory )
				return (NULL);
			i++;
			j = i;
		}
		while (memory)
		{
			result = str_new(word_count(s, c));
			*(word + result) = 0;
		}
		result = &memory;
	}
	return (result);

}

int main ()
{
	char **result;
	char str[] = "hello world";
	result = ft_split(str, ' ');
	printf("%s", *result);
}
