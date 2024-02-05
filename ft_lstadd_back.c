/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:20:29 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/05 20:24:42 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*
void print(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst -> content);
		lst = lst -> next;
	}
}
int main ()
{
	t_list *lst;
	lst = ft_lstnew("alo");
	lst -> next = ft_lstnew("barev");
	ft_lstadd_back(&lst, ft_lstnew("wow"));
	print(lst);
}*/
