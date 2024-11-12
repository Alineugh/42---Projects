/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:14 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/06 10:19:10 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_s(char *str)
{
	int	length_str;

	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	length_str = ft_strlen(str);
	write (1, str, length_str);
	return (length_str);
}
