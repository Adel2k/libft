/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:12:42 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/05 20:13:42 by aeminian         ###   ########.fr       */
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
void print(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
int main() 
{
	t_list *lst;
	lst = ft_lstnew("adel");
	lst ->next = ft_lstnew("hello");
	ft_lstadd_front(&lst, ft_lstnew("wow"));

	print(lst);
}*/
