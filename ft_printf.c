/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judehon <judehon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:56:30 by judehon           #+#    #+#             */
/*   Updated: 2025/10/21 17:52:57 by judehon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printlib.h"

int	ft_printf(const char *s, ...)
{
	va_list args;
	int		i;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 's')
				ft_putstr(va_arg(args, char *));
		}
		else
			write (1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}


