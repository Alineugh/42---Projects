/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:44 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/24 14:25:29 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main ()
{
	char *result = ft_strchr("bonjour tout le monde", 'o');
   	if (result == NULL)
  	 {
       		printf("NULL");
   	}
   	else
   	{
      		printf("%s", result);
   	}
}*/
