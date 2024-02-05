/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:12:42 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/05 14:20:11 by aeminian         ###   ########.fr       */
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
	t_list **head;
	t_list *node1;
	t_list new;
	
	*head = node1;
	new.content = "13";
	new.next = NULL;
	node1->content = "42";
	while (*head)
	{
		*head = ft_lstadd_front(head , node1);
		printf("%d\n", head->content);
		*head = head -> next;
	}
	
}*/
