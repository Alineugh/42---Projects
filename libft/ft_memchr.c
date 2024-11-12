/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:26 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/23 18:41:28 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr1;
	size_t				i;

	ptr1 = s;
	i = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ptr1[i] == (unsigned char) c)
		{
			return ((void *)(ptr1 + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main ()
{
	char *result = ft_memchr("bonjour", 'n',10 );

	if (result == NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%s", result);
	}
	return (0);
}*/