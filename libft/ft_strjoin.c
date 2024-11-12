/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:57:34 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:04:37 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	length_s1;
	size_t	length_s2;

	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = malloc(length_s1 + length_s2 + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy (new_str, s1, length_s1 + length_s2 + 1);
	ft_strlcat (new_str, s2, length_s1 + length_s2 + 1);
	return (new_str);
}
/*
#include <stdio.h>
int	main()
{
	char	*result = ft_strjoin("Bonjour ", "ca va");
	printf("%s", result);
	
}*/