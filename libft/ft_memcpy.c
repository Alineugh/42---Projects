/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:36 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/24 11:40:33 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr1;
	const char	*ptr2;
	size_t		i;

	ptr1 = dest;
	ptr2 = src;
	i = 0;
	if (ptr1 == NULL && ptr2 == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	dst[100] = "";
	char	source[] = "salut";
	
	memcpy(dst, source, 100);

	printf("%s", dst);
}*/
