/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:47 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/24 12:55:38 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		n;
	char	*copy;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	n = i +1;
	copy = (char *)malloc(n * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main ()
{
	const char *chaineP = "Bonjour";
	char *copy = ft_strdup(chaineP);

	printf("La chaine principale est : %s\n", chaineP);
	printf("La copie est : %s", copy);
	
	return (0);
	free (copy);
}*/
