/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:39:19 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/19 21:17:02 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int numb;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				sign *= -1;
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			numb = numb * 10 + str[i] - '0';
			i++;
		}
	}
	return (numb * sign);
}
/*
int main ()
{
	char str[] = "    	---23ad34";
	printf("%d\n", ft_atoi(str));
}*/
