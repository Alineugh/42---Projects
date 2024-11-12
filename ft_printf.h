/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:32:55 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/12 07:54:16 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

# define HEX_ARRAY_LOWER "0123456789abcdef"
# define HEX_ARRAY_UPPER "0123456789ABCDEF"

int		ft_convert_c(char c);
int		ft_convert_s(char *str);
int		ft_convert_d(int num);
int		ft_convert_i(int num);
int		ft_convert_u(int num);
int		ft_convert_x(long num);
int		ft_convert_hexa(int num);
int		ft_convert_p(void *ptr);
int		ft_convert_pourcentage(void);
int		ft_putnbr_x(unsigned int nb);
int		ft_putnbr_hexa(unsigned int nb);
int		ft_putnbr(int nb);
int		ft_unsigned_putnbr(unsigned int nb);
int		ft_pointeur(size_t nb);
int		ft_format(va_list args, char format);
int		ft_printf(const char *format, ...);
#endif