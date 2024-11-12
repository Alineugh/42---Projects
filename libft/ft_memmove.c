/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:39 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/04 10:54:05 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr1;
	const char	*ptr2;
	size_t		i;

	ptr1 = dest;
	ptr2 = src;
	if (ptr1 == ptr2 || n == 0)
		return (dest);
	i = 0;
	if (ptr1 < ptr2)
	{
		ft_memcpy(ptr1, ptr2, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			ptr1[i - 1] = ptr2[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main ()
{
	char dest[100] = "test";
	char source [] = "ab";

	ft_memmove(dest, source, 2);

	printf("%s", dest);
}*/
