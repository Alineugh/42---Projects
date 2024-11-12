/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:51 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/23 18:42:07 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dest[len_dst] != '\0' && i < size)
	{
		len_dst++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] != '\0' && (len_dst + i + 1) < size)
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
int	main ()
{
	char	dst[100] = "Bonjour ";
	char  source[] = "test";

	printf("%zu\n", ft_strlcat(dst, source, 100));
	printf("%s", dst);
}*/
