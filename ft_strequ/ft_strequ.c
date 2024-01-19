/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:52:33 by adel              #+#    #+#             */
/*   Updated: 2023/12/27 21:17:06 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strequ(char const *s1, char const *s)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	if (s1[i] == 0 && s[i] == 0)
		return (1);
	else if (s1 == 0 || s == 0)
		return (0);
	while (s1[i] || s[i])
	{
		if (s[i] == s1[i])
			flag = 1;
		else
			return (0);
		i++;
	}
	if (flag)
		return (1);
	else 
		return (0);

}
int main ()
{
	char s1[] = "0";
	char s2[] = "01";
	printf("%d", ft_strequ(s1 , s2));
}
