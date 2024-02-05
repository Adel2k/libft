/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:34:12 by aeminian          #+#    #+#             */
/*   Updated: 2024/02/05 20:18:16 by aeminian         ###   ########.fr       */
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
	t_list *lst;
	lst = ft_lstnew("adel");
	lst -> next = ft_lstnew("barev");
	lst -> next -> next = ft_lstnew("jans");
	printf("%d",ft_lstsize(lst));
}*/
