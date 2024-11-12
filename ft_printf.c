/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:00:56 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/12 08:11:53 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	if (format == 'c')
		return (ft_convert_c(va_arg(args, int)));
	if (format == 's')
		return (ft_convert_s(va_arg(args, char *)));
	if (format == 'd')
		return (ft_convert_d(va_arg(args, int)));
	if (format == 'i')
		return (ft_convert_i(va_arg(args, int)));
	if (format == 'u')
		return (ft_convert_u(va_arg(args, int)));
	if (format == 'x')
		return (ft_convert_x(va_arg(args, int)));
	if (format == 'X')
		return (ft_convert_hexa(va_arg(args, int)));
	if (format == 'p')
		return (ft_convert_p(va_arg(args, void *)));
	if (format == '%')
		return (ft_convert_pourcentage());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main() {

	ft_printf("Test du caractère : !%x!\n", 42);
	return 0;
}*/