/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:04:07 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:08:23 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write (fd, s, i);
	write (fd, "\n", 1);
}
/*
int	main ()
{
	ft_putendl_fd("bonjour", 1);
}*/