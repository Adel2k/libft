/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:12:42 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/26 19:53:37 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!lst)

	t->next = lst;
	lst->next = new;
}
int main ()
{
	t_list test;
	t_list test2;

	test.int = 3;
	test.next = &test2;
	test2.int = 5;
	ft_lstadd_front(&test, test2);
	printf("d\n", test->int );
}
