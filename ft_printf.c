/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:56:30 by judehon           #+#    #+#             */
/*   Updated: 2025/10/23 18:41:34 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbrhex(unsigned long nb, char c)
{
	int		i;
	char	*base;
	char	*base_caps;

	i = 0;
	base = "0123456789abcdef";
	base_caps = "0123456789ABCDEF";
	if (nb >= 16)
		i += ft_putnbrhex(nb / 16, c);
	if (c == 'x')
		write (1, &base[nb % 16], 1);
	else if (c == 'X')
		write (1, &base_caps[nb % 16], 1);
	return (i + 1);
}

static int	ft_print_pointer(void *ptr)
{
	unsigned long	c;
	int				count;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	count = 0;
	c = (unsigned long)ptr;
	write (1, "0x", 2);
	count += 2;
	count += ft_putnbrhex(c, 'x');
	return (count);
}

static int	ft_def_type(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_putnbrhex((va_arg(args, unsigned int)), c));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_def_type(args, s[i]);
		}
		else
			write (1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
#include <stdio.h>
int	main()
{
	int	i = 123456;
	unsigned int u = 123456;
	void *ptr = &i;
	printf("%c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "caca", ptr, i, i, u, i, i);
	ft_printf("%c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "caca", ptr, i, i, u, i, i);
}