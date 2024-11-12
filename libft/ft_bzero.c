/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:44:07 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/24 13:12:27 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0 ;
		i++;
	}
}
/*
#include <stdio.h>
int	main ()
{
	char	buffer[100] = "";

	ft_bzero(buffer, 10);

	printf("test :%s.", buffer);

	return (0);
}*/
