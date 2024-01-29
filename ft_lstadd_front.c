/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:12:42 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/29 21:40:58 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main ()
{
	t_list test;
	t_list test2;

	test.int = 3;
	test.next = &test2;
	test2.int = 5;
	ft_lstadd_front(&test, test2);
	printf("d\n", test->int );
}*/
