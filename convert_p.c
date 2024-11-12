/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:14:44 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/12 06:39:45 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_p(void *ptr)
{
	size_t		address;
	int			count;

	count = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		count += 5;
		return (count);
	}
	address = (size_t)ptr;
	write (1, "0x", 2);
	count += 2;
	count += ft_pointeur(address);
	return (count);
}
