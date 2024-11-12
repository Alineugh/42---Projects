/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:30:44 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/12 06:56:35 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		count;
	char	mod;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
	}
	mod = (nb % 10) + '0';
	write (1, &mod, 1);
	count++;
	return (count);
}

int	ft_unsigned_putnbr(unsigned int nb)
{
	unsigned int	count;
	char			mod;

	count = 0;
	if (nb >= 10)
	{
		count += ft_unsigned_putnbr(nb / 10);
	}
	mod = (nb % 10) + '0';
	write (1, &mod, 1);
	count++;
	return (count);
}

int	ft_putnbr_x(unsigned int nb)
{
	unsigned int	count;
	char			mod;

	count = 0;
	if (nb >= 16)
		count += ft_putnbr_x(nb / 16);
	mod = HEX_ARRAY_LOWER[nb % 16];
	write (1, &mod, 1);
	count++;
	return (count);
}

int	ft_putnbr_hexa(unsigned int nb)
{
	unsigned int	count;
	char			mod;

	count = 0;
	if (nb >= 16)
		count += ft_putnbr_hexa(nb / 16);
	mod = HEX_ARRAY_UPPER[nb % 16];
	write (1, &mod, 1);
	count++;
	return (count);
}

int	ft_pointeur(size_t nb)
{
	size_t			count;
	char			mod;

	count = 0;
	if (nb >= 16)
		count += ft_pointeur(nb / 16);
	mod = HEX_ARRAY_LOWER[nb % 16];
	write (1, &mod, 1);
	count++;
	return (count);
}
