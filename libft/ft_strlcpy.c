/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:46:49 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/24 10:44:35 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	if (size == 0)
	{
		return (n);
	}
	while (i < size -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	char	dest[100] = "";
	char	source[] = "bonjour";

	printf("%zu\n", ft_strlcpy(dest, source, 0));
	printf("Dest : %s", dest);
}*/
