/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:31 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:03:30 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (*ptr1 < *ptr2)
		{
			return (-1);
		}
		else if (*ptr1 > *ptr2)
		{
			return (1);
		}
		i++;
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main ()
{
	printf("%d", ft_memcmp("te", "te", 100));
}*/
