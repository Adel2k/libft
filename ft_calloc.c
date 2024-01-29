/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeminian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:48:16 by aeminian          #+#    #+#             */
/*   Updated: 2024/01/29 15:47:47 by aeminian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const char	*str;
	size_t		s;

	s = count * size;
	if ((count > 65536 && size != 0) || (size > 65536 && count != 0))
		return (NULL);
	str = (char *)malloc(s);
	if (!str)
		return (NULL);
	ft_bzero((void *)str, s);
	return ((void *)str);
}
/*
int main ()
{
	size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *array = (int *)calloc(num_elements, element_size);

    if (array == NULL) 
	{
        printf(stderr, "Memory allocation failed\n");
        return 1; 
    }
    printf("array[0] = %d\n", array[0]);
    printf("array[1] = %d\n", array[1]);
    printf("array[2] = %d\n", array[2]);
    printf("array[3] = %d\n", array[3]);
    printf("array[4] = %d\n", array[4]);
    free(array);
    return 0;	
}*/
