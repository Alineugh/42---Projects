/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:47:02 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:05:41 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
   char *result = ft_strrchr("bonjour tout le monde", 'o');
   if (result == NULL)
   {
       printf("NULL");
   }
   else
   {
      printf("%s", result);
   }
}*/
