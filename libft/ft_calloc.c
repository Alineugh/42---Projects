/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:44:13 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/28 08:52:16 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tableau;

	tableau = (void *)malloc(nmemb * size);
	if (tableau == NULL)
	{
		return (NULL);
	}
	ft_bzero(tableau, nmemb * size);
	return (tableau);
}
/*
#include <stdio.h>
int	main()
{
	int	*result = ft_calloc(5, sizeof(int));
	int 	i;
	
	i = 0;
	while (i < 5)
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
	free (result);
}*/