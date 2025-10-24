/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:11:31 by judehon           #+#    #+#             */
/*   Updated: 2025/10/24 11:56:51 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
	return (i);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	tmp;
	int				i;
	char			c;

	i = 0;
	tmp = n;
	if (tmp >= 10)
		i += ft_putnbr_unsigned(tmp / 10);
	c = tmp % 10 + '0';
	write(1, &c, 1);
	return (i + 1);
}

int	ft_putnbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
