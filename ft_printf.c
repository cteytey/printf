/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:56:30 by judehon           #+#    #+#             */
/*   Updated: 2025/10/22 17:58:19 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printlib.h"

static int	check_type(va_list args, char c)
{
	if(c == 'c')
		ft_putchar(va_arg(args, int));
	if(c == 's')
		ft_putstr(va_arg(args, char *));
	if(c == 'p')
		ft_putstr(va_arg(args, char *));
	if(c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, unsigned int));
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

int	main()
{
	ft_printf("test caca %s pour voir si %X marche bien", "caca", 123);
}
