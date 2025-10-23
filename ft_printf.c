/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:56:30 by judehon           #+#    #+#             */
/*   Updated: 2025/10/23 17:52:07 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putnbrhex(unsigned int nb, char c)
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

static void	ft_print_pointer(void	*ptr)
{
	unsigned int c;

	c = 42;
	ptr = &c;
	write (1, "0x", 2);
	ft_putnbrhex(c, 'x');
}

static int	check_type(va_list args, char c)
{
	if(c == 'c')
		ft_putchar(va_arg(args, int));
	if(c == 's')
		ft_putstr(va_arg(args, char *));
	if(c == 'p')
		ft_print_pointer(va_arg(args, void *));
	if(c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	if(c == 'u')
		ft_putnbr(va_arg(args, unsigned int));
	if(c == 'x' || c == 'X')
		ft_putnbrhex((va_arg(args, unsigned int)), c);
	if(c == '%')
		ft_putchar('%');
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
			check_type(args, s[i]);
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
	char n = '1';
	void *ptr = &n;

	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);
}
