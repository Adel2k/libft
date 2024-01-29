/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:34:12 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/29 21:07:54 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int main ()
{
	t_list *head;
	t_list a;
	t_list b;
	t_list c;
	char	*str;

	str = (char *)malloc(10);
	str[10] = 0;
	str1 = str;
	str1

	head = &a;

	a.content = '2';
	a.next = &b;

	b.content = '4';
	b.next = &c;

	c.content = '13';
	while (a.next != NULL )
	{
		printf("%d", a.content);
		printf("%d", *(a.next));
	}

}*/
