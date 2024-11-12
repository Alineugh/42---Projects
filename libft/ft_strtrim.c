/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:30:16 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/28 09:21:59 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strrchr(set, s1[end -1]))
	{
		end--;
	}
	new_str = (char *)malloc(end - start + 1);
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1 + start, end - start);
	new_str[end - start] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
int	main ()
{
	char	*result = ft_strtrim("!!!bonjour!", "!");
	printf("%s", result);
}*/