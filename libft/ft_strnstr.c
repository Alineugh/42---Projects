/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:47:00 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/23 18:42:36 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (big[i] == '\0' || len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while (big[i + n] == little[n] && little[n] != '\0' && (i + n) < len)
		{
			n++;
		}
		if (little[n] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main ()
{
	char *result = ft_strnstr("bonjour tout le monde", "mort", 20);
    	if (result == NULL)
  	 {
       		printf("NULL");
   	}
   	else 
	{
		printf("%s", result);
	}
}*/