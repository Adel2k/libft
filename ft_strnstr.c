/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:26:52 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/24 21:58:12 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!haystack && !len)
		return (NULL);
	while (haystack[i] && i <= len)
	{
		while( needle[j] && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		return ((char *)haystack);
	}
	return (NULL);
}
int main ()
{
	char str[] = "hello ad jan";
	char str1[] = "ad";
	printf("%s", ft_strnstr(str, str1, 10));
}
