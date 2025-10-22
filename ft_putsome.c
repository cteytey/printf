/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:11:31 by judehon           #+#    #+#             */
/*   Updated: 2025/10/22 16:12:06 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printlib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		num = num * -1;
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}

void	ft_putnbrhex(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbrhex(nb / 16);
	write (1, &base[nb % 16], 1);
}
