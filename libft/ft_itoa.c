/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:38:57 by aughetti          #+#    #+#             */
/*   Updated: 2024/10/30 14:00:05 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		n = -n;
		digit++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digit_count;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	digit_count = ft_digit_count(n);
	result = malloc((digit_count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[digit_count] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[--digit_count] = (n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
/*
#include <stdio.h>
int	main ()
{
	printf("ft_itoa(0) = %s\n", ft_itoa(0));
	printf("ft_itoa(123) = %s\n", ft_itoa(123));

	return (0);
}*/