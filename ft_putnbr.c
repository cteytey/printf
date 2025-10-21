/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:17:09 by judehon           #+#    #+#             */
/*   Updated: 2025/10/21 15:24:49 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printlib.h"

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