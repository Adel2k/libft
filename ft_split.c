/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:50:13 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/02 00:36:30 by adel             ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**memory;
	size_t	len;
	int		j;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = word_count(s, c);
	if (s && *s && c)
	{
		memory = (char **)calloc(sizeof(char *) , len + 1);

		if (!memory)
			return (NULL);
	}
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i] != 0)
				i++;
			if ((s[i] == c || s[i] == 0) && i <= (int)ft_strlen(s))
			{
				*memory = ft_substr(s, j, i - j);
				memory++;
				if (s[i] == 0)
					break ;
				i++;
			}
		}
		else
			i++;
	}
	return (memory);
}

int main ()
{
	char	**word;
	char str[] = "hello world jhdfj jhdejw ";

	word = ft_split(str, ' ');
	printf("first word = %s\n", word[1]);
}

