/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:45:35 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/19 21:50:23 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void	ft_putendl(char const *s)
{
	write (1, s, ft_strlen(s));
	write (1, "\n", 1);
}
/*int main()
{
	char const s[] = "adel";
	ft_putendl(s);
}*/
