/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:26:57 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:09:08 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	length;
	size_t	remaining_length;
	int		actual_length;

	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	remaining_length = length - start;
	if (remaining_length < len)
		actual_length = remaining_length;
	else
		actual_length = len;
	new_str = malloc(actual_length + 1);
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s + start, actual_length);
	new_str[actual_length] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
int main ()
{
	char	*result = ft_substr("Hello",10, 5 );
	printf("%s", result);
	return (0);
}*/